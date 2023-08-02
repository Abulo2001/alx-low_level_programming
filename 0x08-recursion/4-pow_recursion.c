#include "main.h"

/*
 * _pow_recursion - returns x raised to power y
 * @x: index
 * @y: power
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
reurn (1);
else
return (x * _pow_recursion(x, y - 1));
}
