#include <stdio.h>

typedef struct
{
	int x;
	int y;
} point;

int main(void)
{
	point p1 = {.x = 6, .y = 9};
	printf("(%d, %d)\n", p1.x, p1.y);

	return 0;
}
