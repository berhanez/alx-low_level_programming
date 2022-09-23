#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
 * add_strings - Adds strings
 * @n1: first string
 * @n2: second string
 * @r: results
 * @r_index: current index
 * Return: r can store - *r else 0
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int n, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		n = (*n1 - '0') + (*n2 - '0');
		n += tens;
		*(r + r_index) = (n % 10) + '0';
		tens = n / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		n = (*n1 - '0') + tens;
		*(r + r_index) = (n % 10) + '0';
		tens = n / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		n = (*n2 - '0') + tens;
		*(r + r_index) = (n % 10) + '0';
		tens = n / 10;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);
	return (r + r_index + 1);
}
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: size of result
 * Return: r store sum - *r else 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, len1 = 0, len2 = 0;

	for (index = 0; *(n1 + index); index++)
		len1++;
	for (index = 0; *(n2 + index); index++)
		len2++;
	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
