#include <stdio.h>

int main(void)
{
	int i = 0;
	int number, total, average, n;

	printf("Enter the number of integers you need to find the average: ");
	scanf("%d", &n);

	while (i < n)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%d", &number);
		total = total + number;
		i++;
	}
	printf("The total sum of the numbers is: %d\n", total);
	printf("The average of the numbers is: %d\n", total / n);

	return 0;
}
