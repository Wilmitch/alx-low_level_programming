#include <stdio.h>
#include <stdlib.h>

int *add(int *a, int *b)
{
	int *c;
	c = malloc(sizeof(int));
	*c = *a + *b;
	return c;
}

void printhelloworld()
{
	printf("Hello world!\n");
}

void freeadd(int *p)
{
	free(p);
}

int main(void)
{
	int a = 2, b = 4;
	int *p = add(&a, &b);
	printhelloworld();
	printf("The sum is: %d\n", *p);
	freeadd(p);
	return 0;
}
