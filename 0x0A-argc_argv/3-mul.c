#include "main.h"

/**
 * main - a function that multiplies two numbers
 * @argc: argument count
 * @argv: the argument vector
 * Return: 1 on error, 0 on success
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int num1, num2, res;

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
res = num1 * num2;

printf("%d\n", res);
return (0);
}
}
