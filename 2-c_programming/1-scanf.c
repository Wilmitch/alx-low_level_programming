#include <stdio.h>

int main(void)
{
	int speed, time, distance;

	printf("Enter speed: ");
	scanf("%d", &speed);
	printf("Enter time: ");
	scanf("%d", &time);

	distance = speed * time;

	printf("Distance travelled is: %d\n", distance);
	return 0;
}
