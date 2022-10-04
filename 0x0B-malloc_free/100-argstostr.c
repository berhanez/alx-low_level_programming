#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all args
 * @ac: argument count
 * @av: pointer to array
 * Return: pointer to new string, NULL - if fail
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, size = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
