#include "stdio.h"
#include "string.h"
#include "main.h"

/**
 * _puts_recursion- prints string follows by new line
 * @s: string to be printed
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
if (*s == '\0' && *s != 1)
{
return;
}
_puts_recursion(s - 1);
puts(s);
}
