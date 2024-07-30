#include <unistd.h>
#include <main.h>

/**
  * _print_integer -function that prints integers
  */
void _print_integer(int number)
{
	char buffer[12];
	int negative_number = 0;
	int i = 0;


	if (number == 0)
	{
		_putchar('\n');
		_putchar('0');
		return;
	}

	
	if (number < 0)
	{
		negative_number = 1;
		number = -number;
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
	}

int main()
{

