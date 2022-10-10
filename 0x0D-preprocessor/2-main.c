#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints file name
 * Return: 0
 */
#ifndef _2_MAIN_C_
#define _2_MAIN_C_

int main(void)
{
#ifdef __FILE__
	printf("%s\n", __FILE__);
#endif
return (0);
}
#endif
