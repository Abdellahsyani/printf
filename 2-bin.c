#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_b - convert integer to binary
 * @args: The argument to be stored
 *
 * Return: The argument
 */

int print_b(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	unsigned int j, i = 1, n = 1;
	char *var;

	while (arg > i)
	{
		i *= 2;
		n++;
	}
	var = malloc(sizeof(char) * n);
	if (var == NULL)
		return (-1);

	for (i = 0; arg; i++)
	{
		j = arg % 2;
		arg = arg / 2;
		var[i] = j + '0';
	}
	while (i > 0)
		_putchar(var[--i]);

	free(var);
	return (n - 1);
}
