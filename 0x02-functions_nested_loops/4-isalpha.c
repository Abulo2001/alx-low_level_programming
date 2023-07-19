#include "main.h"

/**
* _isalpha - function that checks for alphabetic character
* @c - character to be checked
* Return: 1 if letter, lower or uppercase, zero otherwise
*/


int _isalpha(int c) /*function that checks for alphabetic character*/
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
