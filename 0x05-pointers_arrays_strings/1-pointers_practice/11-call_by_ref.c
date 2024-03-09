#include <stdio.h>

void increment(int *a);

int main(void)
{
	int a = 50;

	printf("The initial value of a is: %d\n", a);
	increment(&a);
	printf("The new value of a is: %d\n", a);
	return 0;
}

void increment(int *a)
{
	*a += 20;
}
