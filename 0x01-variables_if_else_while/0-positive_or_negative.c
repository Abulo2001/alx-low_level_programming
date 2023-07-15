#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - the entry point of the program
  *Return: this shows the successful termination of the program
  */
int main(void)
{
	int p;

	srand(time(0));
	p = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (p > 0)
	{
		printf("%d is positive\n", p);
	}
	else if (p == 0)
	{
		printf("%d is zero\n", p);
	}
	else
	{
		printf("%d is negative\n", p);
	}
	return (0);
}
