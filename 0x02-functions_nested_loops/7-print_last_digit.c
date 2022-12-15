#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Return: integer
 */

int print_last_digit(int n)
{

	int ldigits = n % 10;

	if (n < 0)
		ldigits = ldigits * -1;
	_putchar(ldigits + '0');

	return (ldigits);
}
