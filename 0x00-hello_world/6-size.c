#include <stdio.h>
/**                                                                           
 * main - outputs size of different types
 *
 * Return: Always 0
 */
int main()
{ 
	int IntegerType;
	float FloatType;
	long int LongIntType;
	long long int LongLongIntType;
	char CharType;

	printf("Size of a char: %ld byte(s)\n",sizeof(CharType));
	printf("Size of an int: %ld byte(s)\n",sizeof(IntegerType));
	printf("Size of a long int: %ld byte(s)\n",sizeof(LongIntType));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(LongLongIntType);
	printf("Size of a float: %ld byte(s)\n",sizeof(FloatType));
        getchar();
       	return (0);
}	
