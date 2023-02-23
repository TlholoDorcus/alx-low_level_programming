#include <stdio.h>

/**
 * print_numbers - prints the numbers 1 to 9
 *
 * Return: nothing
 */
int _putchar(char c);

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
        _putchar(i);
	i++;
        }
        _putchar('\n');
	return;
}
