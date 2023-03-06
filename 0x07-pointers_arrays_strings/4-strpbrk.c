#include <stdio.h>
#include <string.h>

/**
 * *_strpbrk: searches a string for any of a set of bytes
 * @s: string parameter
 * @accept: parameter
 *
 * Return: ret
 */
char *_strpbrk(char *s, char *accept)
{
char *ret;
ret = strpbrk(s, accept);

return (ret);
}
