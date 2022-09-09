#include <stdio.h>
#include <unistd.h>
/**
 * main - print base 
 * Description: prints all base ten numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
