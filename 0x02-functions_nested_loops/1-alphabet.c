#include "main.h"

/**
 * main - to write a function that prints the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet(void) /*a function that prints the alphabet, in lowercase*/
{
char begin = 'a';
char end = 'z';

for (; begin <= end; begin++)
{
_putchar(begin);

}
_putchar('\n');
}
