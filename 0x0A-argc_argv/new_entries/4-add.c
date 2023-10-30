#include <stdio.h>
#include <stdlib.h>

/**
 * main - program adds positive numbers, then prints result followed by \n
 * @argc: argument count
 * @argv: an array of pointers to arguments passed into program
 *
 * Return: 0 always on success
 * 	else return 1 if one of the numbers contains symbols that arent digits
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	if (argc == 1)
		printf("0\n");
	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
