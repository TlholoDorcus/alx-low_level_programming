#include <stdio.h>
#include <string.h>

/**
 * puts_half - print second half of string
 * @str: string passed in
 *
 * Return: 0 for success
 */
void puts_half(char *str)
{
int i, n;
int len = strlen(str);
n = len / 2;

if (len % 2 != 0)
n = (len - 1) / 2;

for (i = n; i < len; i++)
{
printf("%c", str[i]);
}
printf("\n");
return;
}
