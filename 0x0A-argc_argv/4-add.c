#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - adds numbers in argument cmd
 * @argc: count arguments
 * @argv: stores argument as strings in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (num_check(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
		printf("%d\n", sum);
		return (0);
}

/**
 * num_check - check if string is number
 * @str: string in array
 * Return: 0
 */
int num_check(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
