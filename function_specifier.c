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
    int j = 0, k = 0, chars_printed = 0;

    specy_t specy[] = {
        {'c', _putchar_va},
        {'s', _print_string},
        {'%', _print_percent},
        {'\0', NULL}
    };

    va_list args;
    va_start(args, format);

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
                    chars_printed += specy[k].f(args);
                    break;
                }
            }
        }
        else
        {
            _putchar(format[j]);
            chars_printed++;
        }
        j++;
    }

    va_end(args);
    return chars_printed;
}

