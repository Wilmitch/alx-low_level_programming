#include <stdio.h>
#include <string.h>

typedef struct
{
	char first_name[50];
	char last_name[50];
	int age;
} student;

int main(void)
{
	student s1;
	s1.age = 20;
	strcpy(s1.first_name, "Wilmitch");
	strcpy(s1.last_name, "Mwass");

	printf("%s %s\n", s1.first_name, s1.last_name);
	printf("(Age: %d)\n", s1.age);
	return 0;
}
