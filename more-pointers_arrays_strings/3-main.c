#include <stdio.h>

int _strcmp(char *, char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Holberton";
	char s2[] = "Holbeerton";
	printf("%d\n", _strcmp(s1, s2));
	return (0);
}
