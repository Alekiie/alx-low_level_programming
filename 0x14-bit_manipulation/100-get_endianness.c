#include "main.h"
/**
 *get_endianness - function that checks the endianness
 *Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *k = (char *)&z;

	if (*k)
		return (1);
	else
		return (0);
}
