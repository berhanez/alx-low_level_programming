#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies numbers in argument
 * @argc: counts arguments
 * @argv: holds arguments as strings in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		product = product * atoi(argv[i]);
	}
		printf("%d\n", product);
	return (0);
}
