#include "main.h"

/**
 * main - prints all arguments it receives including the first one
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}