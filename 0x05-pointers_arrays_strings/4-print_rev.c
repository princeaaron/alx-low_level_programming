#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be reserved
 */

void print_rev(char *s)
{
	int len = 0, count;

	while (s[count++])
		len++;

	for (count = len - 1; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
