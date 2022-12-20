#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String reversed
 */

void rev_string(char *s)
{
	int count = 0, x, y;
	char *str, tmp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (x = 0; x < (count - 1); x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			tmp = *(str + y);
			*(str + y) = *(str + (y - 1));
			*(str + (y - 1)) = tmp;
		}
	}
}
