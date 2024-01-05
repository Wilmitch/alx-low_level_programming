#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p;

	p = &a;
	printf("p = %d\n", p);
	printf("The size of an int in this pc is %d bytes\n", sizeof(int));
	printf("p + 1 = %d\n", p + 1);
	return 0;
}
