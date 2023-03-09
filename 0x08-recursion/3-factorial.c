#include <stdio.h>
#include <string.h>

/**
 * factorial - prints factorial of a number
 * @n: parameter string
 *
 * return: 1 for success amd -1 for errror
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
