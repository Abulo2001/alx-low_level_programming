#include "main.h"

/**
* _abs - function that computes the absolute value of an integer
* @n: - integer
* Return: end of code
*/

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
n *= -1;/*negative integer*/
return (n);
}
}
