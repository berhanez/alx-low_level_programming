#include <stdio.h>
#include <unistd.h>
/**
 * main - Reverse alph
 * Description: Print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
