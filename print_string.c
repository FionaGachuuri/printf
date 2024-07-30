#include "main.h"


int  _print_string(char *str)
{
	int length = 0;

	if (str == NULL)
	{
		str = "(nil)";
	}
	while (*str)
	{
		_putchar(*str++);
		length++;
	}
	_putchar('\n');
	return (length);
}
