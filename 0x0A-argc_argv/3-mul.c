#include "main.h"
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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
