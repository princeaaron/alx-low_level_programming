#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a given number
 * @n: the number
 * Return: factorial number
 */
int factorial(int n)
{
	int numFac = 1;

	if (n < 0)
		return (-1);

	else if (!n)
		return (1);

	numFac = factorial(n - 1);

	return (numFac * n);
}
