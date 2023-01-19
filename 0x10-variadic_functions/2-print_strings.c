
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sp, *ptr;
	unsigned int x;
	va_list vlst;

	if (separator == NULL || *separator == 0)
		sp = "";
	else
		sp = (char *) separator;
	va_start(vlst, n);

	if (n > 0)
		printf("%s", va_arg(vlst, char *));
	for (x = 1; x < n; x++)
	{
		ptr = va_arg(vlst, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sp, ptr);
	}
	printf("\n");
	va_end(vlst);
}
