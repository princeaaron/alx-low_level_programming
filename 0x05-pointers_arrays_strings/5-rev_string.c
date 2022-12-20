#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String reversed
 */

void rev_string(char *s)
{
	int count = 0, len = 0;
	char strTemp;

	while (s[count++])
		len++;

for (count = len - 1; count >= len / 2; count--)
{
strTemp = s[cout];
s[count] = s[len - count - 1];
s[len - count - 1] = strTemp;
}
}
