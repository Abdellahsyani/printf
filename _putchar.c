#include "main.h"

/**
 * _putchar - prints the conversion specifiers
 * @c: The character
 *
 * Return: str
 */

int _pri_coner(va_list hand, char str)
{
	int l = 0;

	if (str == '%')
		l += _putchar('%');
	else if (str == 'd')
		l += _putchar(va_arg(hand, int));
	else if (str == 'i')
		l += _putchar(va_arg(hand, int));
	else
		l++;
return (l);
}
