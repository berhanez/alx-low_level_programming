#include "main.h"
int is_divisible(int n, int d);
int is_prime_number(int n);
/**
 * is_divisible - check if prime
 * @n: number to check
 * @d: tracker
 * Return: -1 if not divisible
 */

int is_divisible(int n, int d)
{
	if (n % d == 0)
		return (0);

	if (d == n / 2)
		return (1);

	return (is_divisible(n, d + 1));
}
