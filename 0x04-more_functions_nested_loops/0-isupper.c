#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for uppercase
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
	int x = isupper(c);
        if (x > 0)
	x = 1;
	return (x);
}
