#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p;

	p = &a;
	printf("Address p = %d\n", p);
	printf("The value at address p is %d\n", *p);
	printf("The size of an int in this pc is %d bytes\n", sizeof(int));
	printf("Address p + 1 = %d\n", p + 1);
	printf("The value at address p + 1 is %d\n", *(p + 1));
	return 0;
}
