#include "main.h"
/**
 * cap_string - capitalizes everything
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int a = 0, i = 0;
	int s = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		if ((a == 0 || str[a - 1] == spc[i]) && (str[a] >= 97 && str[a] <= 122))
		{
			str[a] -= 32;
		}
		i++;
	}
	a++;
	}
	return (str);
}
