#include "main.h"

/**
  * _print_octal - a function that prints an octal
  * Return:characters printed
  * @number: the octal numbers to be printed
  */

int _print_octal(unsigned int number)
{
	char buffer[12];
	int index = 11;
	int total_chars = 0;

	buffer[index--] = '\0';

	if (number == 0)
	{
		buffer[index--] = '0';
	}
	else
	{
		while (number > 0)
		{
			buffer[index--] = (number % 8) + '0';
			number /= 8;
		}
	}
	total_chars += write(1, &buffer[index + 1], 11 - index);

	return (total_chars);
}
