#include "main.h"

/**
 * _print_rev_recursion - Prints a string in revers
 * @s : the string in revers
 * 
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
