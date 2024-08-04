#include <unistd.h>
#include "main.h"
#include <limits.h>

/**
  * _print_integer -function that prints integers
  * @number: integer to print
  * Return: total characters to be printed
  */

int _print_integer(int number)
{
	char buffer[12];
	int negative_number = 0;
	int i = 0;
	int total_chars = 0;


	if (number == 0)
	{
		_putchar('0');
		return (1);
	}


	if (number < 0)
	{
		negative_number = 1;
		if (number == INT_MIN)
		{
			buffer[i++] = '8';
			number = number / 10;
			number = - number;
		}
		else
		{
			number = -number;
		}
	}
	while (number > 0)
	{
		buffer[i++] = (number % 10) + '0';
		number /= 10;
	}

	if (negative_number)
	{
		buffer[i++] = '-';
	}

	while (i > 0)
	{
		_putchar(buffer[--i]);
		total_chars++;
	}
	_putchar('\n');
	return (total_chars);
}
