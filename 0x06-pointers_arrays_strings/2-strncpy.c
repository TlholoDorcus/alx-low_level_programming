#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copies up to n characters in a string
 * @dest: string passed in
 * @src: string passed in
 * @n: number of bytes
 *
 * Return: dest - the pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
