#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings.
 *@s1: destination string .
 *@s2: string to be concatenated
 *@n: number of bytes to copied
 *Return: char pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, sz1 = 0, sz2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + sz1) != '\0')
		sz1++;
	while (*(s2 + sz2) != '\0')
		sz2++;

	if (sz2 >= n)
		sz2 = n;

	s = malloc(sz1 + n + 1);
	if (s == NULL)
		return (s);

	for (x = 0; x < sz1; x++)
		s[x] = s1[x];

	for (x = 0; x < n; x++)
		s[x + sz1] = s2[x];

	s[sz1 + x] = '\0';
	return (s);
}
