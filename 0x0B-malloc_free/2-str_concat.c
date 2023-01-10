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
    int len1, len2, len3;
    int i;
    char *arrChar;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = 0;
    while (*(s1 + len1) != '\0')
    {
        len1++;
    }

    len2 = 0;
    while (*(s2 + len2) != '\0')
    {
        len2++;
    }

    len3 = len1 + len2;

    arrChar = (char*) malloc(len3 * sizeof(char) + 1);

    if (arrChar == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        arrChar[i] = s1[i];
    for (i = 0; i < len2; i++)
        arrChar[i + len1] = s2[i];

    return (arrChar);
}
