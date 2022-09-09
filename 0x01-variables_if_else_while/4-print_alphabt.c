#include <stdio.h>
#include <unistd.h>
/**
 * main - print alphabet
 * Description: prints alphabet except for some letters q and e
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
