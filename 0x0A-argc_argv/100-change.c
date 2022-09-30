#include <stdio.h>
#include <stdlib.h>
/**
 * main - print min # of coins for change
 * @argc: counts arguments
 * @argv: stores arguments as string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int t = 0, c = 0, p = 0, a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);

	if (t <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[p] != '\0')
	{
		if (t >= coins[p])
		{
			a = (t / coins[p]);
			c = c + a;
			t = t - (coins[p] * a);
		}
		p++;
	}
	printf("%d\n", c);
	return (0);
}
