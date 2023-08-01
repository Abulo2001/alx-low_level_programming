#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer variable
 * @b: the constant byte
 * @n: number of bytes of memory area
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int p;

for (p = 0; p < n; p++)
{
s[p] = b;
}

return (s);
}
