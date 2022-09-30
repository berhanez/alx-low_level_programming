#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number of args
 * @argc: counts arguments
 * @argv: holds cmd arguments as string
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
