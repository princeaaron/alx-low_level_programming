#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 * Return: void
 */

void print_alphabet(void)
{

	char lcase = 'a';

	while (lcase <= 'z')
	{
		_putchar(lcase);
		lcase++;
	}
	_putchar('\n');
}
