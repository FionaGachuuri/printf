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
void _print_percent(void);
int function_specifier(const char *format, ...);


/*struct specifier*/
/**
  * struct specy - a struct func pecifier and args
  * @exact: character member holding the function specifier
  * @f: pointer to the list of arguments used
  */

typedef struct specy
{
	char exact;
	int (*f)(va_list);
} specy_t;

#endif /* MAIN_H */
