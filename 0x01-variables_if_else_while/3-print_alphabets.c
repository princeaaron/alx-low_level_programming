#include <stdio.h>

/**
 * main - Starting point
 * Description: print the letters of the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n, m;

	n = 97;
	m = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}

	while (m < 91)
	{
		putchar(m);
		m++;
	}

	putchar(10);

	return (0);
}

