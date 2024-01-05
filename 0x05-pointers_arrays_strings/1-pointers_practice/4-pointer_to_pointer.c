#include <stdio.h>

int main(void)
{
	int x = 5;
	int *p = &x;

	*p = 6;
	int **q = &p;
	int ***r = &q;
	printf("Value stored at address p is %d\n", *p);
	printf("Value at address q is %d\n", *q);
	printf("Value stored at address q is %d\n", *(*q));
	printf("Value at address r is %d\n", *(*r));
	printf("Value stored at address r is %d\n", *(*(*r)));
	***r = 10;
	printf("The new value of x is %d\n", x);
	return 0;
}




