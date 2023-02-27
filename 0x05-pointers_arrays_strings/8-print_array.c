#include <stdio.h>
#include <string.h>

/**
 * print_array - get length of string
 * @a: string passed in
 * @n: integer
 *
 * Return: 0 for success
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == 5)
break;

if (i != 0)
printf(", ");

printf("%d", *(a + i)); 
}
printf("\n");
return;
}
