#include "main.h"

/**
 * _print_rev_recursion - a function to prints a string in reverse
 * @s: the string
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
