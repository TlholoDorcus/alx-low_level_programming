#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenates with n
 * @dest: string passed in
 * @src: string passed in
 * @n: number of bytes
 *
 * Return: dest - the pointer
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
