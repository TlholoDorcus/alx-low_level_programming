#include <stdio.h>
#include <string.h>

/**
 * print_rev - outputs a string
 * @s: output string
 *
 * Return: 0 for success
 */
void print_rev(char *s)
{
int i;
int len = strlen(s);

if (s == NULL)
{
return;
}
for (i = len - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
return;
}
