#include <math.h>

/**
 * _pow_recursion- a function that returns the value of x raised to the power of y
 * @x: parameter base value
 * @y: parameter power value
 *
 * Return: -1 if y is lower than 0.
 * the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return(-1);
}
return(pow(x, y));
}
