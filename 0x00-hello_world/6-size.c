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

	printf("Size of a char: %lu byte(s)\n",sizeof(CharType));
	printf("Size of an int: %lu byte(s)\n",sizeof(IntegerType));
	printf("Size of a long int: %lu byte(s)\n",sizeof(LongIntType));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(LongLongIntType);
	printf("Size of a float: %lu byte(s)\n",sizeof(FloatType));
        getchar();
       	return (0);
}	
