#include "main.h"
#define NUM_BITS_INT (sizeof(unsigned long int) * 8)
/**
 *flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 *@n: integer
 *@m: integer to compare
 *Return: numbers of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d;
	unsigned long int k = 0, q = 0, siz = 0;

	for (d = NUM_BITS_INT - 1; d >= 0; d--)
	{
		k = (n >> d) & 1;
		q = (m >> d) & 1;
		if (k != q)
			siz++;
	}
	return (siz);
}
