#include <stdio.h>

/**
 * factorial - function gives the factorial of a number
 * @n - the inetgerparameter that is given
 *
 * Return: -1 if n is lower than 0.
 * the factorial of a number.
 * 1 when n is 0.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
