#include "stdio.h"
#include "string.h"
#include "main.h"

/**
 * _print_rev_recursion- function prints string in reverse
 * @s: string parameter passed
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
