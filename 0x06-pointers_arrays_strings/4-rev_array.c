#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses a string
 * @a: output string
 * @n:number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
char temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
return;
}
