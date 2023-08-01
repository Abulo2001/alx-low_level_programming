#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for
 * Return: pointer to the byte in s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int m, n;

for (m = 0; *s != '\0'; m++)
{
for (n = 0; accept[j] != '\0'; n++)
{
if (*s == accept[n])
{
return (s);
}
}
s++;
}

return (NULL);
}
