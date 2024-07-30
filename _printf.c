#include "main.h"

/**
  *
  *
  *
  *
  *
  */

int _printf_(const char *format, ...)
{
	va_list arguments;
	int chars_printed_;

	va_start(arguments, format);
	chars_printed_ = function_specifier(format, arguments);
	va_end(arguments);

	return (char_printed_);
}

