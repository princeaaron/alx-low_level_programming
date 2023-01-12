#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int moncents, moncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	moncents = atoi(argv[1]);

	while (moncents > 0)
	{
		if (moncents >= 25)
			moncents -= 25;
		else if (moncents >= 10)
			moncents -= 10;
		else if (moncents >= 5)
			moncents -= 5;
		else if (moncents >= 2)
			moncents -= 2;
		else if (moncents >= 1)
			moncents -= 1;
		moncoins += 1;
	}
	printf("%d\n", moncoins);
	return (0);
}
