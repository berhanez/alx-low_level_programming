#include <stdio.h>
#include <unistd.h>
/**
 * main - alphabet in lower case
 * Description: print alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
return (0);
}

