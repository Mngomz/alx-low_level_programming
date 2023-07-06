#include "main.h"

/**
 * set_bit - set the bit to 1 at given index
 *
 * @n: pointer
 *
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
