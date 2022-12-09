#include <stdio.h>

/**
 * main - Entry Point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
		putchar(10);
		return (0);
}
