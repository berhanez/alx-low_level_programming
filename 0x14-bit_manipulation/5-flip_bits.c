#include "main.h"
/**
 * flip_bits - get # of bits needed to flip to get from one num to another
 * @n: number
 * @m: number to flip n to
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor = xor >> 1;
	}

	return (bits);
}
