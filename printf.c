#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - prints to stdout according to given format
 * @format:  the str  int including  format  specifiers
 * Return:   number of characters  printed  sucessfully
 */
int _printf(const char *format, ...)
{
	int n_chr, i, r;
	va_list args;

	va_start(args, format);
	n_chr = i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			r = print_arg(args, format + i + 1);
			if (r < 0)
				return (-1);
			n_chr += r;
			i += 2;
		}
		else
		{
			n_chr += _putchar(format[i]);
			i += 1;
		}
	}
	va_end(args);
	return (n_chr);
}

/**
 * _putchar - writes character to stdout
 * @c:        The character to print
 * Return:    On success 1, On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_arg - prints argument of %<specifier>
 * @args:      the list of variadic arguments
 * @nxt1:    pointer to the character after  %
 * Return:     number of characters printed
 */
int print_arg(va_list args, const char *nxt1)
{
	int i = 0;
	int (*f)(va_list);
	f_st arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_d},
		{'\0', NULL}
		};

	if (*nxt1 == '%')
		return (_putchar('%'));

	while (arr[i].spec)
	{
		if (arr[i].spec == *nxt1)
		{
			f = arr[i].func;
			return (f(args));
		}
		i++;
	}

	return (-1);
}
