#include <stdio.h>

int main(void)
{
	int a[] = {2, 4, 5, 8, 1};
	int i;

	for (i = 0; i  < 5; i++)
	{
		printf("Address = %d\n", &a[i]);
		printf("Address = %d\n", a + i);
		printf("Value = %d\n", a[i]);
		printf("Value = %d\n", *(a + i));
	}
	return 0;
}
