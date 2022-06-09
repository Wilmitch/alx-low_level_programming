#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f1(int len);
int f2(char *name, int len);
int f3(char *name, int len);
int f4(char *name, int len);
int f5(char *name, int len);
int f6(char c);

/**
 * main - Entry point.
 *
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	long str[] = {
			0x3877445248432d41,
			0x42394530534e6c37,
			0x4d6e706762695432,
			0x74767a5835737956,
			0x2b554c59634a474f,
			0x71786636576a6d34,
			0x723161513346655a,
			0x6b756f494b646850
		};
	char pass[7];
	char *name = argv[1];
	int len = strlen(name);
	int ret = argc;

	ret = f1(len);
	pass[0] = ((char *)str)[ret];

	ret = f2(name, len);
	pass[1] = ((char *)str)[ret];

	ret = f3(name, len);
	pass[2] = ((char *)str)[ret];

	ret = f4(name, len);
	pass[3] = ((char *)str)[ret];

	ret = f5(name, len);
	pass[4] = ((char *)str)[ret];

	ret = f6(name[0]);
	pass[5] = ((char *)str)[ret];

	pass[6] = 0;
	printf("%s", pass);
	return (0);
}

/**
 * f1 - function for 1st character.
 * @len: length of name.
 *
 * Return: encoded character.
 */
int f1(int len)
{
	return ((len ^ 0x3b) & 0x3f);
}

/**
 * f2 - function for 2nd character.
 * @name: the user name.
 * @len: length of name.
 *
 * Return: encoded character.
 */
int f2(char *name, int len)
{
	int ret = 0;
	int i = 0;

	for (; i < len; i++)
		ret += name[i];

	return ((ret ^ 0x4f) & 0x3f);
}

/**
 * f3 - function for 3rd character.
 * @name: the user name.
 * @len: length of name.
 *
 * Return: encoded character.
 */
int f3(char *name, int len)
{
	int ret = 1;
	int i = 0;

	for (; i < len; i++)
		ret *= name[i];

	return ((ret ^ 0x55) & 0x3f);
}

/**
 * f4 - function for 4th character.
 * @name: the user name.
 * @len: length of name.
 *
 * Return: encoded character.
 */
int f4(char *name, int len)
{
	int ret = name[0];
	int i = 0;

	for (; i < len; i++)
		if (name[i] > ret)
			ret = name[i];

	srand(ret ^ 0xe);
	return (rand() & 0x3f);
}

/**
 * f5 - function for 5th character.
 * @name: the user name.
 * @len: length of name.
 *
 * Return: encoded character.
 */
int f5(char *name, int len)
{
	int ret = 0;
	int i = 0;

	for (; i < len; i++)
		ret += name[i] * name[i];

	return ((ret ^ 0xef) & 0x3f);
}

/**
 * f6 - function for 6th character.
 * @c: the first character of the user name.
 *
 * Return: encoded character.
 */
int f6(char c)
{
	int ret = 0;
	int i = 0;

	for (; c > i; i++)
		ret = rand();

	return ((ret ^ 0xe5) & 0x3f);
}
