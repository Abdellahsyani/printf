#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - writes character to stdout
 * @c: The character to print
 *
 * Return: success if 1, and error if -1
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_b - convert integer to binary
 * @args: The argument to be stored binary
 *
 * Return: The argument
 */

int print_b(va_list args)
{
	int j, i;
	int b = 0;
	char *var;

	var = (char *) malloc(sizeof(char));
	while (args)
	{
		j = args % 2;
		args = args / 2;
		var[b] = j;
		b++;

		_putchar("%d", j);
	}
	for (i = b - 1; i >= 0; i--)
	{
	_putchar("%d", var[i]);
	}
return (args);
}
