#include <stdio.h>

/**
 * main - function concatenates two strings
 *
 * Return: NULL
 */

char *str_concat(char *s1, char *s2);
{
	int i;
	char *s;

	if (str == 0)
		return (0);
	for (i = 0; str[i]; i++)
		;
	s = malloc(sizeof(char) * (i + 1));
	if (s == 0)
		return (0);
	s[i] = '\0';
		/* printf("%d: %c\n", i, s[i]);*/
	while (i--)
	{
		s[i] = str[i];
		/*printf("%d: %c\n", i, s[i]);*/
	}
	return (s);
}
