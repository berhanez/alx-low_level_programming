#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all numbers up to 98 from top or bottom
 * @n: integer
 * Description: prints all numbers from i to 98
 * Return: 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
