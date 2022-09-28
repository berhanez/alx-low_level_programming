#include "main.h"
/**
 * is_prime_number - detects prime number
 * @n: number to test
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helper_prime(n, 2));
}
/**
 * helper_prime - subfunction for is_prime_number
 * @num: number
 * @i: for recursive
 * Return: 1 for prime, else 0
 */
int helper_prime(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
			return (0);
		else
			return (helper_prime(num, i + 1));
	}
	else
		return (1);
}
