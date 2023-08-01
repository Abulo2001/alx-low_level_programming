#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string to check
 * @c: the character to locate
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
int p;

while (1)
{
p = *s++;
if (p == c)
{
return (p - 1);
}
if (p == 0)
{
return (NULL);
}
}
}
