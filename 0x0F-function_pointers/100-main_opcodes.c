#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: argument count
 * @argv: argument values in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nbytes, i;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;

	for (i = 0; i < nbytes; i++)
	{
		if (i == nbytes - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}
