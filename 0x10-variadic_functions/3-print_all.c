#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints everything passed
 * @format: list of all types of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j, c = 0;
	char *abc;
	const char args[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(all, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(all, double)), c = 1;
				break;
			case 's':
				abc = va_arg(all, char *), c = 1;
				if (!abc)
				{
					printf("(nil)");
					break;
				}
				printf("%s", abc);
				break;
		}
		i++;
	}
	printf("\n"), va_end(all);
}
