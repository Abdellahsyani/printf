#include "main.h"
#include "stdarg.h"

/**
 * print_d - prints integers form args
 * @args:    the list of variadic args
 * Return:   number of  printed digits
 */
int print_d(va_list args)
{
	int n = va_arg(args, int);
	unsigned int d = n, i = 1;
	int r = 0;

	if (n < 0)
	{
		r += _putchar('-');
		d = 0 - n;
	}

	while (d != d % (i * 10))
	{
		i *= 10;
		if ((i * 10) % 10 != 0)
			break;
	}

	while (i >= 1)
	{
		r += _putchar(d / i + '0');
		d %= i;
		i /= 10;
	}
	return (r);
}
