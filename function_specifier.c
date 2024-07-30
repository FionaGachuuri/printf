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
	int chars_printed;
	va_list args;
	int i = 0;
	total = 0;

	va_start(args,format);

	while (format && *format)
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			format++;
			int number = va_arg(args, int);
			_print_integer(number);

			total++;
		}
		else
		{
			_putchar(*format);
			total++;
		}
	format++;

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
		}
		else
		{
		chars_printed += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}
