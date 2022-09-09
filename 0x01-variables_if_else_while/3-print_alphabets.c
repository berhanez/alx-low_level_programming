#include <stdio.h>
#include <unistd.h>
/**
 * main - print both upper and lower case
 * Description - first lower case then upper case alpha print
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
		return (0);
}

