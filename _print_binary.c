#include "main.h"

/**
 * _print_binary - prints an unsigned integer as a binary number
 * @number: The unsigned integer to print
 * Return: The number of characters printed
 */

int _print_binary(unsigned int number)
{
	char buffer[32];
	int index = 0;
	int total_chars = 0;


	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number > 0)
	{
		buffer[index++] = (number % 2) + '0';
		number /= 2;
	}
	while (index > 0)
	{
		_putchar(buffer[--index]);
		total_chars++;
	}
	return (total_chars);
}
