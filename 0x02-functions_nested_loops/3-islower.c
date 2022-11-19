#include "main.h"

/**
 * _islower - checks_lowercase_alphabets
 * @c: idk
 *
 * Return: 1 if in lowercase and 0 if otherwise.
 * Relays my work explained.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
