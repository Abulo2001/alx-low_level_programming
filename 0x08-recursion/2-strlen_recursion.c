#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string
  * @s: pointer to the string
  * Return: successful end of code
  */

int _strlen_recursion(char *s)
{
int n = 0;

if (*s == '\0')
{
return (0);
}
else
{
n++;
return (n + _strlen_recursion(++s));
}
}
