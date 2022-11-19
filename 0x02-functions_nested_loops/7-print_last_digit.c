#include  "main.h"

/**
 * print_last_digit - print_alphabet
 * @num: its mine damnit
 *
 * Return: 1 if positive, return -1 if negative and 0 otherwise;
 * Does my stuff explained.
 */
int print_last_digit(int num)
{
	int n;

	n = num % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
