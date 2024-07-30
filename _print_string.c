#include "main.h"
#include <unistd.h>

/**
  *_print_string - function that prints a string
  *@pstr: pointer to the string
  *Return: length of the string
  */

int _print_string(char *pstr)
{
	int length = 0;

	if (pstr == NULL)
	{
		return (0);
	}

	while (*pstr != '\0')
	{
		_putchar(*pstr++);
		length++;
	}

	return (length);
}
