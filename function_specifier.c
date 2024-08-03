#include "main.h"

/**
  * function_specifier - a function that chooses which
  * function will be excecuted.
  * @format: the pointer to the format string used
  * Return: the function that has been called
  * @args: list of arguments
  */

int function_specifier(const char *format, va_list args)
{
	int chars_printed = 0;
	int i = 0;
	char buffer[8];

	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == 'c')
			{
				chars_printed += _putchar(va_arg(args, int));
			}
			else if (*format == '%')
			{
				chars_printed += _print_percent();
			}
			else if (*format == 's')
			{
				chars_printed += _print_string(va_arg(args, char *));
			}
			else if (*format == 'i' || *format == 'd')
			{
				chars_printed += _print_integer(va_arg(args, int));
			}
			else if (*format == 'b')
			{
				chars_printed += _print_binary(va_arg(args, unsigned int));
			}
			else if (*format == 'X' || *format == 'x')
			{
				chars_printed += write(1, &buffer[i + 1], 8);
			}
			else if (*format == 'p')
			{
				 chars_printed += _print_string("0x");
			}

		}
		else
		{
			chars_printed += _putchar(*format);
		}
		format++;
	}
	return (chars_printed);
}
