#include <stdio.h>

/**
 * main - Entry point
 * Description: print letters of alphabet without e, q
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
		n++;
	}
	putchar(10);
	return (0);
}

