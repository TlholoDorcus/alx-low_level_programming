#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *_strdup- function that returns a pointer to a ne space in memory
 * @str: parameter passed
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
int length;
char *copy;
length = strlen(str);
copy = malloc((length + 1) * sizeof(char));
if (str == NULL)
{
str = malloc(length *sizeof(char));
str[0] = 'H';
}
if (copy == NULL)
{
return ('\0');
}
strcpy(copy, str);
return (copy);
}
