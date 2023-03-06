#include <stdio.h>
#include <string.h>

/**
 * *_strst: locates a substring
 * @s: string parameter
 * @accept: parameter
 *
 * Return: ret
 */
char *_strstr(char *haystack, char *needle)
{
char *ret;
ret = strstr(haystack, needle);

return (ret);
}
