#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for 0 to 9 digit
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _isdigit(int c)
{
	int i = 0;
	int x;

	while (i < 10)
	{
        if (c == i)
	x = 1;
	if (c != i)
	x = 0;
	i++;
	}
	return (x);
}
