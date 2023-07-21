#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 t0 14
 * Return: end of code
*/

void more_numbers(void)
{
int a;
int b;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 15; b++)
{
if (b >= 10)
{
_putchar(b / 10 + '0');
}
_putchar(b % 10  + '0');
}
_putchar('\n');
}
}
