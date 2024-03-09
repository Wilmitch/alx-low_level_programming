#include <stdio.h>

int main(void)
{
	int grade;

	printf("Please enter your grade: ");
	scanf("%d", &grade);

	if (grade >= 50)
		printf("Congratulations, you Passed!!!\n");
	else if (grade >= 25)
		printf("You need to work harder\n");
	else
		printf("You need to repeat your nursery classes!\n");
	printf("Happy learning\n");

	return 0;
}
