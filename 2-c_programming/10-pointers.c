#include <stdio.h>

void add_one(int *a);

int main(void)
{
	int b = 5;
	add_one(&b);
	printf("%d\n", b);
	printf("address of b is: %p\n", &b);
	return 0;
}

void add_one( int *a)
{
	*a += 1;
	printf("address of a is :%p\n", a);
}
