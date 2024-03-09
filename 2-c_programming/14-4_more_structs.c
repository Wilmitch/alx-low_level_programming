#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char first_name[50];
	char last_name[50];
	int age;
} student;

void print_student(student *s);

int main(void)
{
	student *s1;
	s1 = calloc(1, sizeof(student));
	(*s1).age = 20;
	strcpy((*s1).first_name, "Wilmitch");
	strcpy((*s1).last_name, "Mwass");

	print_student(s1);
	printf("\nAge: %d\n", (*s1).age);
	printf("\n%s %s\n", (*s1).first_name, (*s1).last_name);

	free(s1);
	return 0;
}

void print_student(student *s)
{
	printf("%s %s\n", (*s).first_name, (*s).last_name);
        printf("(Age: %d)\n", (*s).age);
	(*s).age = 25;
	(*s).first_name[0] = 'K';
}
