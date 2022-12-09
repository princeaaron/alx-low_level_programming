#include <stdio.h>

/**
 * main- Starting point
 * Description: print the letters of the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar(10);

	return (0);
}
