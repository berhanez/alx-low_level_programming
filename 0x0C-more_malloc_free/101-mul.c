#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int str_len(char *str);
char *create_xarray(int size);
char *zero_loop(char *str);
void get_prod(char *prod, char *mult, int d, int z);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * str_len - get string lenth
 * @str: string
 * Return: length
 */
int str_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * *create_xarray - creates array, initialized with x
 * @size: array size
 * Return: pointer to array
 */
char *create_xarray(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';
	array[i] = '\0';
	return (array);
}

/**
 * zero_loop - loops through till non-zero detected
 * @str: string
 * Return: pointer to non-zero
 */
char *zero_loop(char *str)
{
	while (*str != '\0' && *str == '0')
	       str++;

	return (str);
}

/**
 * get_digit - convert char to int
 * @c: char
 * Return: int
 */
int get_digit(char c)
{
	int d = c - '0';

	if (d < 0 || d > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (d);
}

/**
 * get_prod - multiply string numbers by a digit
 * @prod: temp store rseult
 * @mult: strin of numbers
 * @d: single digit
 * @z: zeroes
 * Return: prod
 */
void get_prod(char *prod, char *mult, int d, int z)
{
	int m, n, t = 0;

	m = str_len(mult) - 1;
	mult = mult + m;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (z--)
	{
		*prod = '0';
		prod--;
	}

	for (; m >= 0; m--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		n = (*mult - '0') * d;
		n = n + t;
		*prod = (n % 10) + '0';
		t = n / 10;
	}
	if (t != '\0')
		*prod = (t % 10) + '0';
}

/**
 * add_nums - adds numbers in strings
 * @final_prod: final product
 * @next_prod: subsequent prod to be added
 * @next_len: length of next prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int n, t = 0;
	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		n = (*final_prod - '0') + (*next_prod - '0');
		n = n + t;
		*final_prod = (n % 10) + '0';
		t = n / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		n = (*next_prod - '0');
		n = n + t;
		*final_prod = (n % 10) + '0';
		t = n /10;

		final_prod--;
		next_prod--;
	}

	if (t)
		*final_prod = (t % 10) + '0';
}
/**
 * main - multiplies 2 positive numbers
 * @argv: argument value
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, i, d, z = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = zero_loop(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = zero_loop(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = str_len(argv[1]) + str_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (i = str_len(argv[2]) - 1; i >= 0; i--)
	{
		d = get_digit(*(argv[2] + i));
		get_prod(next_prod, argv[1], d, z++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			_putchar(final_prod[i]);
	}
	_putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
