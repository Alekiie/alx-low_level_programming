#include "main.h"
/**
 *binary_to_uint - convert binary to integer
*@b:binary number
*Return: number in decimal base
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1;
	unsigned int z = 0;
	int d;
	unsigned int siz;

	if (!b)
		return (0);
	while (b[z] != '\0')
	{
		z++;
	}
	siz = z;
	z = 0;
	for (d = siz - 1; d >= 0; d--)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
		if (b[d] == '1')
		{
			z += a;
		}
		a *= 2;
	}
	return (z);
	}
