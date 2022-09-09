#include <stdio.h>
#include <unistd.h>
/**
 * main - entry
 * Description: prints single digit numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
