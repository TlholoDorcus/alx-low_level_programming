#include <stdio.h>
#include <string.h>

/**
 * print_chessboard: prints chessboard
 * @c: string parameter
 *
 * Return: c
 */
int _putchar(char c);

void print_chessboard(char (*a)[8])
{
int i, j;
char c;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (a[i][j] != ' ')
{
c = a[i][j];
putchar(c);
}
}
putchar('\n');
}
return;
}
