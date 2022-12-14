#include "main.h"
/**
 *set_bit - sets the value of a bit to 1 at given index
 *@n: pointer to number
 *@index: index
 *Return: 1 if succedd 0 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z = 1;

	if (n == NULL)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
	return (-1);
	z <<= index;
	*n = *n | z;
	return (1);
}
