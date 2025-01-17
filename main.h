#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/*Function Protypes*/
int _putchar(char b);
int _print_integer(int number);
void _print_number(int a);
int _print_string(char *pstr);
int _print_percent(void);
int function_specifier(const char *format, va_list args);
int _printf(const char *format, ...);
int _print_binary(unsigned int number);
int _print_hexadecimal(unsigned int number, int uppercase);
int _print_octal(unsigned int number);
int _print_pointer(void *ptr);

#endif /* MAIN_H */
