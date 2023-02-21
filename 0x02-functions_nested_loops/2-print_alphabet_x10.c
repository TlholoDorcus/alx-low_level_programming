#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet lettters
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
int y = 1;

while (y <= 10)
{
int x = 'a';
while (x <= 'z')
{
void print_alphabet(void);
putchar(x);
x++;
}
y++;
putchar('\n');
}
return;
}
