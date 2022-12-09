#include <stdio.h>

/**
 * main - Starting point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}

