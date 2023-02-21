#include <stdio.h>

/**
 * print_sign - checks the sign of an integer
 * @c: Print sign
 *
 * Return: 1 when greater than 0.
 */
int _putchar(char c);

int print_sign(int n)
{
char y;
int x = 0;

if (n > 0)
{
y = '+';
x = 1;
}

if (n == 0)
{
y = '0';
x = 0;
}

if (n < 0)
{
y = '-';
x = -1;
}
_putchar(y);
return (x);
}
