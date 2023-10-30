#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers, and prints the result of the
 * multiplication followed new line.
 * argc: argument count
 * argv: array of pointers to arguments passed in the program
 *
 * return: 0 always on success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	
	if (argc  == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", (num1 * num2));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
