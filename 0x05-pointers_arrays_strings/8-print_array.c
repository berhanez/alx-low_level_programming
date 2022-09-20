#include "main.h"
#include <stdio.h>
/**
 * print_array - print nth element of array
 * @a: int type array pointer
 * @n: int type integer
 * Description: print nth elements separated by comma
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
