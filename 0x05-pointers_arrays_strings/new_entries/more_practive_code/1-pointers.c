#include <stdio.h>

int main(void)
{
	int a;
	int *p;
	
	a = 10;	
	p = &a;
	printf("%p\n", p);
	printf("%i\n", *p);
	printf("%p\n", &a);
	printf("%i\n", a);
}	
