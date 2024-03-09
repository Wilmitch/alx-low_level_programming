#include <stdio.h>

int main(void)
{
	int num, max;

	while (num != -1)
	{
		printf("Enter a number: ");
		scanf("%d", &num);

		if (num > max)
			max = num;
	}
	printf("Maximum number is: %d\n", max);

	return 0;
}

