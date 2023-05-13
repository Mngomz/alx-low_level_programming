#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *
 * @n: 1st one.
 *
 * @m: 2nd two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int s;

	for (s = 0; n || m; n >>= 1, m >>= 1)
	{
	if ((n & 1) != (m & 1))
	s++;
	}

	return (s);
}
