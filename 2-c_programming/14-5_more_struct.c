#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char first_name[50];
	char last_name[50];
	int age;
} student;

void print_student(student *s);

int main(void)
{
	student *s;
	s = calloc(1, sizeof(student));

	strcpy(s->first_name, "Wilmitch");
	strcpy(s->last_name, "Mwass");
	(*s).age = 20;
	printf("Age: %d\n", s->age);
	print_student(s);

	printf("First name: %s\n", s->first_name);
        printf("Last name: %s\n", s->last_name);
        printf("Age: %d\n", s->age);

	free(s);
	return 0;
}

void print_student(student *s)
{
	printf("First name: %s\n", s->first_name);
	printf("Last name: %s\n", s->last_name);
	printf("Age: %d\n", s->age);

	s->age = 25;
	s->first_name[0] = 'K';
}


