#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * 0-create_array.c- check the code
 * @size: parameter passed
 * @c: arguments passed
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
i = 0;
s = malloc(size * sizeof(char));
if (s == NULL)
{
return('\0');
}
if (size == 0)
{
return('\0');
}
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return(s);
}
