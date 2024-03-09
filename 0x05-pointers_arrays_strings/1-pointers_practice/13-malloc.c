#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int *p;

	p = malloc(sizeof(int));
	a = 400;
	*p = a;
	printf("The vaue of a is: %d\n", *p);
	
	int b = 4021991;
	*p = b;
	printf("The new value of a is: %d\n", *p);
	free(p);
	return 0;
}
