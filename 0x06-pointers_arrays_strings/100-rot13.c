#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: a string to be encoded
 * Return: returns encoded string
 */

char *rot13(char *s)
{
int a, b;

char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (s[a] == alph[b])
{
s[b] = cod[b];
break;
}
}
b = 0;
}	return (s);
}
