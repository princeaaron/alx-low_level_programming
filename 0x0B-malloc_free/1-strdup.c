#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string given as a parameter.
 *
 * Return:  returns a pointer to a newly allocated space in memory.
 */
char *_strdup(char *str)
{
    unsigned int i;
    char *arrPtr;

    if (str == NULL)
        return (NULL);
    arrPtr = (char *)malloc(sizeof(char) * (strlen(str) + 1));

    if (arrPtr == NULL)
        return (NULL);

    for (i = 0; i < strlen(str); i++)
    {
        arrPtr[i] = str[i];
    }

    return (arrPtr);
}
