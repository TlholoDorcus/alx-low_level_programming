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
int i;
int length = strlen(str);
int halfIndex = length / 2;

if (length % 2 == 0)
{
for (i = halfIndex; i < length; i++)
{
printf("%c", str[i]);
}
}
else
{
halfIndex = (length - 1) / 2;
for (i = halfIndex; i < length; i++)
{
printf("%c", str[i]);
}
}
printf("\n");
return;
}
