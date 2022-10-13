#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed between strings
 * @n: number of strings passed to function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *abc;

	va_start(str, n);


	for (i = 0; i < n; i++)
	{
		abc = va_arg(str, char *);
		if (abc != NULL)
			printf("%s", abc);
		else
			printf("(nil)");

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
