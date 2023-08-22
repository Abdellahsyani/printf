#ifndef PRINTF_MAIN_HEADER
#define PRINTF_MAIN_HEADER

#include <stdarg.h>
/**
 * struct f_st - for a specifier and suitable function
 * @spec: character that referes to a specefic  format
 * @func: the suitable function to print the arguament
 */
typedef struct f_st
{
	char spec;
	int (*func)(va_list);
} f_st;

int _printf(const char *format, ...);
int _putchar(char c);
int print_arg(va_list args, const char *nxt1);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_b(va_list args);

#endif
