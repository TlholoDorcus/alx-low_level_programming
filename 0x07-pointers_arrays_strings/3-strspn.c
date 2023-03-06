#include <stdio.h>
#include <string.h>

/**
 * _strspn: gets the length of a string
 * @s: string parameter
 * @accept: parameter
 *
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
int n = strspn(s, accept);

return (n);
}
