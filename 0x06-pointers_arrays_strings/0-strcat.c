#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concantenates a string
 * @dest: string passed in
 * @src: string passed in
 *
 * Return: dest - the pointer
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
