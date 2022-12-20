#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string with character
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
