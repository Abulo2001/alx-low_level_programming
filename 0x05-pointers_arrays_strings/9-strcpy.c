#include "main.h"

/**
 * *_strcpy - copies a string pointed to by src
 * @dest: destination pointer
 * @src: source pointer
 * Return: the pointer to dest
 */


char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0'; /* Add the null terminator to the destination buffer*/
return (dest_start); /* Return the starting address of the destination buffer*/
}
