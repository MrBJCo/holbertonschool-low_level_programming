#include "main.h"

/**
 * print_alphabet - a fuction that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
int n;

for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
