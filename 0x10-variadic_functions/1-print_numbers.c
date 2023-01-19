#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sp;
	unsigned int x;
	va_list vlst;

	if (separator == NULL || *separator == 0)
		sp = "";
	else
		sp = (char *) separator;
	va_start(vlst, n);

	if (n > 0)
		printf("%d", va_arg(vlst, int));
	for (x = 1; x < n; x++)
		printf("%s%d", sp, va_arg(vlst, int));
	printf("\n");
	va_end(vlst);
}
