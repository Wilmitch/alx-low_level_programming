#include <stdio.h>

/**
 * main - prints the calender month based on the inputed number
 *
 * Return: 0 always on success
 */
int main(void)
{
	int number;
	printf("Enter the month number to print month dates: ");
	scanf("%d", &number);

	switch (number)
	{
		case 1:
			printf(calender(1));
			break;
		case 2:
			printf(calender(2));
                        break;
		case 3:
			printf(calender(3));
                        break;
		case 4:
			printf(calender(4));
                        break;
		case 5:
			printf(calender(5));
                        break;
		case 6:
			printf(calender(6));
                        break;
		case 7:
			printf(calender(7));
                        break;
		case 8:
			printf(calender(8));
                        break;
		case 9:
			printf(calender(9));
                        break;
		case 10:
			printf(calender(10));
                        break;
		case 11:
			printf(calender(11));
                        break;
		case 12:
			printf(calender(12));
                        break;
		default:
			printf("Invalid month number\n");
	}
	printf("Switch is over\n");
	return 0;
}
