#include "main.h"
#include <string.h>

/**
  * rev_string - function that reverse a string
  * @s: pointer argument
  */

void rev_string(char *s)
{
int len = strlen(s);
int a, b;

for (a = 0, b = len - 1; a < b; a++, b--)
{
char temp = s[a];

s[a] = s[b];
s[b] = temp;
}
}
