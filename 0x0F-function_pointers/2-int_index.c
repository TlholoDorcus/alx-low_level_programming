#include <stdio.h>

/**
 * int_index - a fuction that returns an integer
 * @array: string parameters
 * @size: size of array
 * @cmp: pointer to a fuction passed
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int t;
i = 0;
if (size <= 0)
{
return (-1);
}
while (i < size)
{
t = cmp(array[i]);
if (t != 0)
{
return (i);
}
i++;
}
return (-1);
}
