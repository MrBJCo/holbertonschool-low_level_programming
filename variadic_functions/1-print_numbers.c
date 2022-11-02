#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; // args will show the list
	unsigned int i = 0; // the const will indicate for n

	if (n > 0) // n is better that 0
	{
		va_start(args, n); //args and n will interact integer

		while (i < n) // i is not better that n 
		{
			printf("%d", va_arg(args, int)); // show the va_arg and int to the output

			if (i != n - 1  && separator != NULL) // i will not be better to n
				// And will show the direction of the separator
				// but will not be true and can't return NUll
				printf("%s", separator);

			i++; // i will increase the value
		}
		va_end(args); // will leave or return to regular statement
	}
	printf("\n"); // will add white space so will not see it weird
}
