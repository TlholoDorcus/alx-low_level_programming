#include <stdio.h>
#include <string.h>

/**
 * *_memcpy- fills memory with constant byte
 * @dest: parameter returned
 * @src: byte that fills memory
 * @n: number of times 
 *
 * Return: dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest,src,n);
return (dest);
}
