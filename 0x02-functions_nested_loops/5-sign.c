#include <stdio.h>

/**
 * print_sign - checks the sign of an integer
 * @n: The integer to check
 *
 * Return: 1 and prints + if n>0,0 and prints 0 if n=0,-1 and prints - if n<0.
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
