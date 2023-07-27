#include "main.h"

/**
  * _strncat -  a function that concztenates two strings
  * @dest: the pointer to the source string
  * @src: the pointer to the destination
  * @n: number of bytes to concatenate
  * Return: a pointer to the resulting string
  */
char *_strncat(char *dest, char *src, int n)
{
size_t a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != '\0' && b < n)
{
dest[a + b] = src[b];
b++;
}
dest[a + b] = '\0';
return (dest);
}
