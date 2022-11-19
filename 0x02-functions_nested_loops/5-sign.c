#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: idk
 *
 * Return: 1 if greater than zero
 * -1 if less than greater than zero and
 * 0 if is zero
 * Relays my work explained
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
