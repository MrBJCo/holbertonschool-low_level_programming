#!/bin/bash
$-Wall -Werror -Wextra -pedantic -std=gnu89 *c.
$gcc -c *c.
$ar -rc libmy.a *.o
$ranlib libholberton.a
$nm libholberton.a
