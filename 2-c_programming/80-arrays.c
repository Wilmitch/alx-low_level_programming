#include <stdio.h>

/**
 * main - entry point
 *
 * return: 0 always on success
 */
int main(void)
{
	int grade[5];
	grade[0] = 92;
	grade[1] = 85;
	grade[2] = 72;
	grade[3] = 73;
	grade[4] = 95;

	for (int i = 0; i < 5; i++)
	{
		printf("Grade[%d] = %d\n", i, grade[i]);
	}
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += grade[i];
	}
	printf("The average of the array integers is: %d\n", total / 5);

	return 0;
}
