#include "main.h"

/**
  * function_specifier - a function that chooses which 
  * function will be excecuted.
  * @format: the pointer to the format string used  
  * Return: the function that has been called
  * @functions: list of arguments
  */

int function_specifier(const char *format, ...)
{
	int j = 0, k = 0, int chars_printed;

	specy_t specy[]{
	{'c', _putchar},
        {'s', _print_string},
        {'%', _print_percent},
        {'\0', NULL}
   	};

	va_list functions;

	while ((functions == NULL) && functions[j] == '\0')
	{
		return (-1);
	}
	while(functions != NULL && functions[j] != '\0')
	{
		if(functions[j] == '%')
		{
			j++;
			if (functions[j] = '\0')
			{
				break;
				for(specy[k].exact != '\0'; k++)
				{
					chars_printed += specy[k].f(args);
					break;
				}
			}
		}
		else
		{
			_putchar(functions[k]);
			chars_printed++;
		}
		j++;
	}
	return (chars_printed);
}











					return (0);

  
