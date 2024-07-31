#include "main.h"
#include <stdarg.h>

/**
  * _printf - A function tat produces the output according to the
  *functions
  *@format: the format string
  *Return: No of chars printed
  */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed;

	va_start(args, format);
	chars_printed = function_specifier(format, args);
	va_end(args);

	return (chars_printed);
}
