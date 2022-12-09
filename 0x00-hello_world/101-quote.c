#include <stdio.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description: prints quote from Dora's Korpar
 *
 * Return: Failed 1 (Failure)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
