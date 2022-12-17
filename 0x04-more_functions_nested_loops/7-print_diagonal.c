#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: input variable
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
			_putchar('\n');
	}
}
