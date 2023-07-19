#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string parameters
 * @f: function pointer passed
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
return;
}
