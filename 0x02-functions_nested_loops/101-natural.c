#include <stdio.h>
/**
 * main - SUm of multiples of 3 and 5
 * Description: find the summation of multiples of 3 and 5 under 1024
 * Return: 0
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
