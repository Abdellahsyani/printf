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
	unsigned int i, n;
	char var[32];

	i = 0;
	do {
		j = arg % 2;
		arg = arg / 2;
		var[i] = j + '0';
		i++;
	} while (arg);

	n = 0;
	while (i > 0)
		n += _putchar(var[--i]);

	return (n);
}
