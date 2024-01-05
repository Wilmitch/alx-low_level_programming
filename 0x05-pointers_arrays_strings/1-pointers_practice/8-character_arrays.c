#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[4];
	c[0] = 'j';
	c[1] = 'o';
	c[2] = 'h';
	c[3] = 'n';
	int length = strlen(c);
	printf("Length = %d\n", length);
	return 0;
}
