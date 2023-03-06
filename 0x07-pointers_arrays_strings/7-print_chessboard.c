#include <stdio.h>
#include <string.h>

/**
 * print_chessboard: prints chessboard
 * @a: string parameter
 *
 * Return: c
 */
int _putchar(char c);
void print_chessboard(char (*a)[8])
{
int i, j;
char b;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (a[i][j] != ' ')
{
b = a[i][j];
putchar(b);
}
}
putchar('\n');
}

return;
}
