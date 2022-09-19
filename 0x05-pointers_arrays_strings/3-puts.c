/*
 * File: 3-puts.c
 * Auth: Alexander
 */

#include <stdio.h>

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
