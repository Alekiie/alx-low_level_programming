#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet_x10
 *
 * Relays my work explained.
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 97; i < 123; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
	}
}
