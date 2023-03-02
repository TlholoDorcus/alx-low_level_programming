#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *cap_string - capitilizes every word of a string
 * @*a: string passed in
 *
 * Return: uppercase characters
 */
char *cap_string(char *a)
{
int i;
int len = strlen(a);

for (i = 0; i < len; i++)
{
if (i == 0 || a[i - 1] == ' ')
{
a[i] = toupper(a[i]);
}
}
return (a);
}
