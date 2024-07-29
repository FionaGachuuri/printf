#include "main.h"

int  _print_string(va_ args)
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

int main()
{
	_print_string("Hello team mate");
	return (0);
}
