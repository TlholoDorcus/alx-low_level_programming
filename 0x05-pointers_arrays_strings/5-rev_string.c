#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: output string
 *
 * Return: 0 for success
 */
void rev_string(char *s)
{
int i;
int len = strlen(s);
char temp;

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
return;
}
