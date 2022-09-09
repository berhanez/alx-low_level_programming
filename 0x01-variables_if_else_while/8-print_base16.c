#include <stdio.h>
#include <unistd.h>
/**
 * main - base 16
 * Description: all numbers in lowercase
 * Return: 0
 */
int main(void)
{
	char a;
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

