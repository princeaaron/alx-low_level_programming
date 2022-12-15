#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{

	int hTens, hOnes, mTens, mOnes, hMax;

	hMax = 58;
	hTens = '0';

		while (hTens < '3')
		{
			if (hTens == '2')
			{
				hMax = '4';
			}
			hOnes = '0';
			while (hOnes < hMax)
			{
				mTens = '0';
				while (mTens < '6')
				{
					mOnes = '0';
					while (mOnes < 58)
					{
						_putchar(hTens);
						_putchar(hOnes);
						_putchar(':');
						_putchar(mTens);
						_putchar(mOnes);
						_putchar('\n');
						mOnes++;
					}
					mOnes = '0';
					mTens++;
				}
				mTens = '0';
				hOnes++;
			}
			hOnes = '0';
			hTens++;
		}
}
