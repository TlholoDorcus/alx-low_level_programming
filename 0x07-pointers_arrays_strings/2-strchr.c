#include <stdio.h>
#include <string.h>

/**
 **_strchr - returns pointer to the first c
 * @s: string parameter
 * @c: parameter
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
char *str;
str = strchr(s, c);

return (str);
}
