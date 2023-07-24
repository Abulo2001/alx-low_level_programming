#include "main.h"
#include <string.h>

/**
  * puts_half - a function that print half of a string
  * @str: function pointer parameter
  */

void puts_half(char *str)
{
int a, b;

b = strlen(str);
for (a = 0; a < b; a++)
{
if (b % 2 == 0)
{
if (a >= (b / 2))
{
_putchar(str[a]);
}
}
else
{
if (a > ((b - 1) / 2))
_putchar(str[a]);
}
}
_putchar('\n');
}
