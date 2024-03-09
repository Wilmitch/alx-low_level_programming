#include <stdio.h>

char *_strstr(char *haystack, char *needle);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}

char *_strstr(char *haystack, char *needle)
{

