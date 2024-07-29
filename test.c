#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * handle_format - handles format specifiers
 * @format: format string
 * @args: list of arguments
 * Return: number of characters printed
 */
int handle_format(const char *format, va_list args)
{
    int i = 0, printed_chars = 0;
    specifier_t specifiers[] = {
        {'c', print_char},
        {'s', print_string},
        {'d', print_int},
        {'i', print_int},
        {'u', print_unsigned},
        {'o', print_octal},
        {'x', print_hex},
        {'X', print_HEX},
        {'p', print_address},
        {'%', print_percent},
        {'\0', NULL}
    };

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                break;
            for (int j = 0; specifiers[j].spec != '\0'; j++)
            {
                if (format[i] == specifiers[j].spec)
                {
                    printed_chars += specifiers[j].f(args);
                    break;
                }
            }
        }
        else
        {
            _putchar(format[i]);
            printed_chars++;
        }
        i++;
    }

    return (printed_chars);
}
