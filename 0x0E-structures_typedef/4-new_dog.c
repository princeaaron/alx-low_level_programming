#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int len, x;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	arr = (char*) malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
	{
		arr[x] = str[x];
	}
	arr[x] = '\0';

	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: ndog's name
 * @age: ndog's age
 * @owner: ndog's owner
 * Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *ndog_name, *ndog_owner;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog_name = _strdup(name);
	if (ndog_name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog_owner = _strdup(owner);
	if (ndog_owner == NULL)
	{
		free(ndog_name);
		free(ndog);
		return (NULL);
	}
	ndog->name = ndog_name;
	ndog->age = age;
	ndog->owner = ndog_owner;
	return (ndog);
}
