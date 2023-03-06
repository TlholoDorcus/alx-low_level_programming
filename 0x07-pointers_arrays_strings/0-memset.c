#include <stdio.h>
#include <string.h>

/**
 * *_memset- fills memory with constant byte
 * @s: parameter returned
 * @b: byte that fills memory
 * @n: number of times 
 *
 * Return: s for comparisons
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
