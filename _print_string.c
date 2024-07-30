#include "main.h"

int  _print_string(va_list, arguments)
{
	int length = 0;
	char *str = va_arg( arguments, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str++);
		length++;
	}

	_putchar('\n');
	return (length);
}

/*int main()
{
	_print_string("Hello team mate");
	return (0);
}*/
