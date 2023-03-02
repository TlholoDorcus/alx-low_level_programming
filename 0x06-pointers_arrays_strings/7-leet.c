#include <stdio.h>
#include <string.h>

/**
 * *leet - check the code for
 * @str - parameter passed
 *
 * Return: Char
 */
char *leet(char *str)
{
unsigned char c;
int i;
int len = strlen(str);

for (i = 0; i < len; i++)
{
c = str[i];
if (c == 'a' || c == 'A')
{
str[i] = '4';
}
else if (c == 'e' || c == 'E')
{
str[i] = '3';
}
else if (c == 'o' || c == 'O')
{
str[i] = '0';
}
else if (c == 't' || c == 'T')
{
str[i] = '7';
}
else if (c == 'l' || c == 'L')
{
str[i] = '1';
}
}

return (str);
}
