#include "main.h"

/**
 * reverse_array - function that reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int o, p, tmp;

p = n - 1;

for (o = 0; o < n / 2; o++)
{
tmp = a[o];
a[o] = a[p];
a[p--] = tmp;
}
}
