#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * c = char, x = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list vlst;
	int n = 0, x = 0;
	char *sp = ", ";
	char *str;

	va_start(vlst, format);

	while (format && format[x])
		x++;

	while (format && format[n])
	{
		if (n  == (x - 1))
		{
			sp = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(vlst, int), sp);
			break;
		case 'x':
			printf("%d%s", va_arg(vlst, int), sp);
			break;
		case 'f':
			printf("%f%s", va_arg(vlst, double), sp);
			break;
		case 's':
			str = va_arg(vlst, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sp);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(vlst);
}
