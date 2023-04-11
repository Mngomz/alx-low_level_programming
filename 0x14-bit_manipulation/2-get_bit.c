#include "main.h"

/**
 * get_bit - gives value of a bit at an index
 *
 * @n: constant
 *
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
	return (-1);

	x = (n >> index) & 1;

	return (x);
}
