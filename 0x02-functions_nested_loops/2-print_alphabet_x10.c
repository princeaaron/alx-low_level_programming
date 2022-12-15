#include "main.h"

/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{

	int rnd = 0;
	char lcase = 'a';

	while (rnd < 10)
	{

		lcase = 'a';
		while (lcase <= 'z')
		{
			_putchar(lcase);
				lcase++;
		}
		_putchar('\n');

			rnd++;
	}
}
