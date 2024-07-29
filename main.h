#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/* Function Prototypes */
int _putchar(char b);
int _putchar_va(va_list args);
int _print_string(va_list args);
int _print_percent(va_list args);
int function_specifier(const char *format, ...);

/* struct specifier */
/**
  * struct specy - a struct func specifier and args
  * @exact: character member holding the function specifier
  * @f: pointer to the list of arguments used
  */
typedef struct specy {
    char exact;
    int (*f)(va_list);
} specy_t;

#endif /* MAIN_H */

