#include <stdio.h>

/**
 * array_iterator - prints a name
 * @array: string parameters
 * @size: size of array
 * @action: fuction passed 
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
return;
}
