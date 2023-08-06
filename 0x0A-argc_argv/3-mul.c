#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int dig1, dig2, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		dig1 = atoi(argv[1]);
		dig2 = atoi(argv[2]);

		mul = dig1 * dig2;
		printf("%d\n", mul);
	}
	return (0);
}
