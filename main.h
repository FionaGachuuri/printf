#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>


/*Function Protypes*/
int _putchar(char b);
void _print_number(int a);
int _print_string(char *str);
int _print_percent(void);
int function_specifier(const char *format,va_list args);
int _printf(const char *format, ...);
#endif /* MAIN_H */
