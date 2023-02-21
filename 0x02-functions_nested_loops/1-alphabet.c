#include <stdio.h>

/**
 * print_alphabet - writes the alphabet lettters
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
int x = 'a';

while( x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return;
}
