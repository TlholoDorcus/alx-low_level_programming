#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks whether alphabet is lowercase, letter or uppercase
 * @c: The integer to check
 *
 * Return: 1 for yes and 0 for no.
 */
int _isalpha(int c)
{
int x = 0;

if (isalpha(c) > 0)
x = 1;

if (isalpha(c) == 0)
x = 0;

return (x);
}
