#include <stdio.h>

int main(void)
{
	int a = 1025;
	int *p;
	p = &a;
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Address is:  %d, value is: %d\n", p, *p);
	printf("Address is:  %d, value is: %d\n", p + 1, *(p + 1));

	char *p0;
	p0 = (char *)p;

	printf("size of char is %d bytes\n", sizeof(char));
        printf("Address is:  %d, value is: %d\n", p0, *p0);
        printf("Address is:  %d, value is: %d\n", p0 + 1, *(p0 + 1));
	return 0;
}
