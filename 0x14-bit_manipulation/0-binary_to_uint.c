#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: binary number
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uns_int = 0;
	int length = 0, base_2;

	if (b = '\0')
		return (0);

	while (b[length])
	{
		length++;
	}

	while (length >= 0)
	{
		length = length - 1;
		base_2 = 1;

		length = length - 1;
		base_2 = base_2 * 2;

		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			uns_int += base_two;
		}
	}
	return (uns_int);
}
