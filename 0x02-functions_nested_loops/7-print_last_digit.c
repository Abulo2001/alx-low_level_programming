#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
* @n: interger or number
* Return: end of code
*/

int print_last_digit(int n)
{
int c;

if (n < 0)
{
n *= -1;
}

c = n % 10;
if (c < 0)
{
c *= -1;
}
_putchar(c + '0');
return (c);
}
