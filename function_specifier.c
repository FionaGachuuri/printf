#include "main.h"
#include <stdarg.h>

/**
  * function_specifier - a function that chooses which
  * function will be executed.
  * @format: the pointer to the format string used
  * Return: the function that has been called
  */

int function_specifier(const char *format, ...)
{
    int j = 0, k = 0, chars_printed_ = 0;

    specy_t specy[] = {
        {'c', _putchar_va},
        {'s', _print_string},
        {'%', _print_percent},
        {'\0', NULL}
    };

    va_list  arguments;
    va_start( arguments, format);

    while (format != NULL && format[j] != '\0')
    {
        if (format[j] == '%')
        {
            j++;
            if (format[j] == '\0')
            {
                break;
            }
            for (k = 0; specy[k].exact != '\0'; k++)
            {
                if (format[j] == specy[k].exact)
                {
                    chars_printed_ += specy[k].f( arguments);
                    break;
                }
            }
        }
        else
        {
            _putchar(format[j]);
            chars_printed_++;
        }
        j++;
    }

    va_end(functions);
    return (chars_printed_);
}

