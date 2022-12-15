#include "main.h"

/**
 * main- Entry point
 * Description: Prints prints _putchar
 * Return: 0 (Success)
 */

int main(void)
{

	char word[9] = "_putchar";
	int x = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(word[x]);
	}
	_putchar('\n');
	return (0);
}
