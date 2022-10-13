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
	int bytes, i;
	int (*address)(int, char **) = main;
	unsigned char op_code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		op_code = *(unsigned char *)address;
		printf("%.2x", op_code);

		if (i == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");

	return (0);
}
