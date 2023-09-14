#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * This program will assign a random number to the variable n each time
 * its executed. The variable n will store a different value every time
 * you run this program
 * Return: 0 always on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("The number is positive\n");
	else if (n == 0)
		printf("The number is zero\n");
	else
		printf("The number is negative\n");
	return (0);
}
