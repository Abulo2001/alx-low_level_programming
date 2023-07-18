#include "main.h"

/** print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void) /*function that prints 10 times the alphabet, in lowercase*/
{
char begin;
char end;
int i = 0;

for (; i < 10; i++)
{
for (begin = 'a', end = 'z'; begin <= end; begin++)
{
_putchar(begin);
}
_putchar('\n');
}
}
