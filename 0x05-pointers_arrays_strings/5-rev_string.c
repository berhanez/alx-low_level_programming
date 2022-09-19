#include "main.h"
/**
 * rev_string - reverses a string
 * string_length - finds length
 * Description: String_lengteh feeds in to rev_string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = string_length(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
/**
 * string_length - string length
 * Description: Returns length
 * @pointer: pointer
 * @c: return length
 */

int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
		c++;

	return (c);
}
