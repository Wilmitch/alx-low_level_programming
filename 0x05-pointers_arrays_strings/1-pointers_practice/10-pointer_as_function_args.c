#include <stdio.h>

void change_value(int *n);

int main(void)
{
	int n = 42;
	printf("N is: %d\n", n);
	change_value(&n);
	printf("N is now: %d\n", n);
	return 0;
}

void change_value(int *n)
{
	*n = 1337;
}
