#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *string_toupper - returns upper case
 * @*c: string passed in
 *
 * Return: uppercase characters
 */
char *string_toupper(char *a)
{
int i;
int len = strlen(a);

for (i = 0; i < len; i++)
{
a[i] = toupper(a[i]);
}
return (a);
}
