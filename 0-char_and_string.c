#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_c - prints next character from arguments
 * @args:    the variadic arguments list
 * Return:   1 if a character printed sucessfully
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_s - print next string from arguments
 * @args:    the variadic arguments list
 * Return:   number of printed characters
 */
int print_s(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
