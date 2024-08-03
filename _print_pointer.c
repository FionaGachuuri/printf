#include "main.h"

/**
  * _print_pointer -function that prints a pointer address
  *@ptr: pointer to be printed
  *Return: number of characters printed
  */

int _print_pointer(void *ptr)
{
	unsigned long m_address = (unsigned long)ptr;
	char *hexadeci_digits = "0123456789ABCDEF";
	int i = 18;
	int chars_printed = 0;
	char buffer[19];

	if (ptr == NULL)
	{
		return(_print_string("(nil)"));
	}

	buffer[18] = '\0';
	buffer[0] = '0';
	buffer[1] = 'x';

	while (m_address)
	{
		buffer[i--] = hexadeci_digits[m_address % 16];
		m_address /= 16;
	}

	i++;
	chars_printed += _print_string("0x");
	while (buffer[i])
	{
		chars_printed += _putchar(buffer[i++]);
	}

	return (chars_printed);
}
