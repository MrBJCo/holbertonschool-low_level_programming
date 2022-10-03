#include <stdio.h>
#include <stlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
init main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if(low != e && low ! = q)
			putchar(low);
	}
	printf("\n");

	return (0);
}
