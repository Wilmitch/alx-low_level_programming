#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * this program assigns random number to var n each time its
 * executed. It will print the last digit of the number stored
 * in the variable
 * Return: 0 always on success
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/*your code goes here*/
	if (lastDigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	else
	{	printf("Last digit of %i is %i and is less than 6", n, lastDigit);
		printf(" and not 0\n");
	}
	return (0);
}
