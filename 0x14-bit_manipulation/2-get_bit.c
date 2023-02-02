#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer input
 * @index: index
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	return ((n & m) > 0);
}
