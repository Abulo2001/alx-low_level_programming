#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase.
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
