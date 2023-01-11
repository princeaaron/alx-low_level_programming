#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
    unsigned int x, y;
    char *ptr;
    
    x = 0;
    y = 0;

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL)
		s1 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	ptr = (char *)malloc(sizeof(char) * (y + x + 1));

	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];

	for (y = 0; s2[y] != '\0'; y++)
		ptr[x + y] = s2[y];

	ptr[x + y + 1] = '\0';

	return (ptr);
}
