#include "main.h"

/**
 * _isalpha - checks_if_it_is_a_letter
 * @c: idk
 *
 * Return: 1 if it is a letter and 0 if otherwise.
 * Relays my work explained.
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
