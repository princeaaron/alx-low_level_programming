#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{

	int tRow, tColumn, tProduct, tTens, tOnes;

	for (tRow = 0; tRow <= 9; tRow++)
	{
		for (tColumn = 0; tColumn <= 9; tColumn++)
		{
			tProduct = tRow * tColumn;
			tTens = tProduct / 10;
			tOnes = tProduct % 10;

			if (tColumn == 0)
			{
				_putchar('0');
			}
			else if (tProduct < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(tOnes + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tTens + '0');
				_putchar(tOnes + '0');
			}
		}
		_putchar('\n');
	}
}
