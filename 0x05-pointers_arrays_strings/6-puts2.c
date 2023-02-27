#include <stdio.h>
#include <string.h>

/**
 * puts2 - print everyother char of string
 * @str: string passed in
 *
 * Return: 0 for success
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
printf("%c", str[i]);
}
printf("\n");
return;
}
