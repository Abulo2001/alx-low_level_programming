#include "main.h"

/**
 * string_toupper - lowercase to uppercase letters
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
int p;

for (p = 0; s[p] != '\0'; p++)
{
if (s[p] >= 'a' && s[p] <= 'z')
s[p] = s[p] - 32;
}

return (s);
}
