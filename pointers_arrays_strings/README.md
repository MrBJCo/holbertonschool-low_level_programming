 
inters, arrays and strings

# Learning Objectives

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

# Tasks

## 98 Battery st.

Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

* Prototype: `void reset_to_98(int *n);`



```
$ amonkeyprogrammer@ubuntu:~/0x05$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
$ amonkeyprogrammer@ubuntu:~/0x05$ ./0-98 
n=402
n=98
$ amonkeyprogrammer@ubuntu:~/0x05$
```

## Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

* Prototype: `void swap_int(int *a, int *b);`

**Solution:** [1-swap.c]

```
$ amonkeyprogrammer@ubuntu:~/0x05$ cat 1-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
$ amonkeyprogrammer@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
$ amonkeyprogrammer@ubuntu:~/0x05$
```

## This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

* Prototype: `int _strlen(char *s);`

**Solution:** [2-strlen.c]
```
$ amonkeyprogrammer@ubuntu:~/0x05$ cat 2-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
$ amonkeyprogrammer@ubuntu:~/0x05$ ./2-strlen 
10
$ amonkeyprogrammer@ubuntu:~/0x05$
```

## I do not fear computers. I fear the lack of them

