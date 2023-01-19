#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: variadic inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlst;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(vlst, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vlst, const unsigned int);
	}

	va_end(vlst);

	return (sum);
}
