#include <string.h>
#include "main.h"

/**
  * puts2 - a function that prints every other character
  * @str: argument pointer parameter
  */

void puts2(char *str)
{
int a, b;

b = strlen(str);
for (a = 0; a < b; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}

}
_putchar('\n');

}
