## She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.

    Prototype: **void _puts_recursion(char *s)**;

FYI: The standard library provides a similar function: **puts**. Run **man puts** to learn more.

```
julien@ubuntu:~/Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/Recursion$ 
```

Repo:

    GitHub repository: **holbertonschool-low_level_programming**
    Directory: **recursion**
    File: **0-puts_recursion.c**
