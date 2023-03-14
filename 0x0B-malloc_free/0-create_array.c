#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *create_array- creates an array of chars
 * @size * sizeof(char) - parameter passed
 *
 * Return: NULL of fails and array if pass
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
