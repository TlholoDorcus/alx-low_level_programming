#include <stdio.h>

/**
 * swap_int - swapping variables
 * @a: variable for swapping
 * @b: variable for swapping
 *
 * Return:0 for success
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
