#include <stdio.h>

int main(void)
{
	int a, b;
	int *p;

	a = 10;
	p = &a;
	printf("%d\n", p);
	printf("%d\n", &a);
	printf("%d\n", &p);
	printf("Value of a is %d\n", a);
	
	b = 20;
	*p = b;
	printf("Value of a is now %d\n", a);
	printf("Pointer p is now %d\n", p);
	return 0;
}
