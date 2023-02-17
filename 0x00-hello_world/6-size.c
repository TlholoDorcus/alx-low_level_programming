#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int LongIntType;
	long long int LongLongIntType;
	float FloatType;
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(LongIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(LongLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(FloatType));
	return (0);
}
