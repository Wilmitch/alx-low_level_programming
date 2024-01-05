#include <stdio.h>

int main(void)
{
	char c;
	char *p0;

	c = 'f';
	p0 = &c;
	printf("The address of c is %d\n", p0);
	printf("The value of c is %c\n", *p0);
	printf("The size of c is %d byte(s).\n", sizeof(c));
	return 0;
}
