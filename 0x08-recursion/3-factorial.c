#include "main.h"

/*
 * factorial - returns the factorial
 * @n: a number
 * Returns: the factorial of a number
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (0);
else if (n == 1)
return (1);
else
return (n * factorial(n - 1));
}
