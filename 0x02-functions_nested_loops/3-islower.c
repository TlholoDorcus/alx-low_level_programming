#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks whether alphabet is lower case or not
 * @c: The integer to check
 *
 * Return: 1 for yes and 0 for no.
 */
int _islower(int c)
{
int x = 0;

if (islower(c) > 0)
x = 1;

if (islower(c) == 0)
x = 0;

return (x);
}
