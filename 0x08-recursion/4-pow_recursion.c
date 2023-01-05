#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that returns value of x raised to the power of y.
 * @x: first integer
 * @y: second integer
 * Return: Result
 */
int _pow_recursion(int x, int y)
{
	int pRec = 1;

	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	pRec = _pow_recursion(x, y - 1);

	return (pRec * x);
}
