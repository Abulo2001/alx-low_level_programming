#include "main.h"

/**
  * _strcat -  a function that concatenates two strings
  * @dest: the source string
  * @src: the destination string
  * Return: the resulting string
  */

char *_strcat(char *dest, char *src)
{
size_t a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != '\0')
{
dest[a + b] = src[b];
b++;
}
dest[a + b] = '\0';
return (dest);
}
