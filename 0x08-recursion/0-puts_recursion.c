#include "stdio.h"
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints string
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
  {
   return; 
  }
  _puts_recursion(s - 1);
  puts(s);
}
