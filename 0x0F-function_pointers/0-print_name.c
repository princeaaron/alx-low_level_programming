#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to a function to use to print name
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
