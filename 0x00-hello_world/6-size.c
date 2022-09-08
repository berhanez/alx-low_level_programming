#include <stdio.h>
/**                                                                           
 * main - outputs size of different types
 *
 * Return: Always 0
 */
int main()
{ 
	char CharType;
	int IntegerType;
	long int LongIntType;
	long long int LongLongIntType;
	float FloatType;

	printf("Size of a char: %c byte(s)\n",sizeof(CharType));
	printf("Size of an int: %d byte(s)\n",sizeof(IntegerType));
	printf("Size of a long int: %ld byte(s)\n",sizeof(LongIntType));
	printf("Size of a long long int: %lld byte(s)\n",sizeof(LongLongIntType);
	printf("Size of a float: %ld byte(s)\n",sizeof(FloatType));
        getchar();
       	return (0);
}	
