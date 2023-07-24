#include "main.h"
#include <string.h>

/**
  * print_rev - a function that print a string in reverse other
  * @s: a pointer argument for string
  */

void print_rev(char *s)
{
int len = strlen(s);
int a;

for (a = len - 1; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
