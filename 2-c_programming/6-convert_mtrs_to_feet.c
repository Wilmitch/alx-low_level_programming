#include <stdio.h>

/**
 * An app that will convert entered meters into feet.
 *
 * return 0: always on success.
 */

int main(void)
{
	double initial, step, stop;

	do
	{
		printf("Initial (m): ");
		scanf("%lf", &initial);

		if (initial < 0)
			printf("Error input, Please enter a number >= 0!\n");
	} while (initial < 0);
	do
        {
                printf("Step (m): ");
                scanf("%lf", &step);

                if (step < 0)
                        printf("Error input, Please enter a number >= 0!\n");
        } while (step < 0);
	do
        {
                printf("Stop (m): ");
                scanf("%lf", &stop);

                if (stop < 0)
                        printf("Error input, Please enter a number >= 0!\n");
        } while (stop < 0);

	printf("\n");
	printf("Meters    Feet\n");
	printf("********************\n");
	for (double conv = initial; conv < stop; conv += step)
	{
		printf("%-10.4f%-10.4f\n", conv, conv * 3.28084);
	}
	return 0;
}
