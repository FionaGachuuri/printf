#include "main.h"
#include <unistd.h>
/**
  *_putchar -function that writes character b to stdout
  *@b: character to be printed.
  *
  *Return: on success return 0,
  *on error, return 1
  */

int _putchar(char b)
{
	return (write(1, &b, 1));
}
