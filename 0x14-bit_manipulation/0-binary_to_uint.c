#include "main.h"

/**
 * binary_to_uint - used to convert binary number to an
 * unsigned integer
 *
 * @b: binary number container
 *
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int con_val = 0;

	if (!b)
	return (0);

	for (a = 0; b[a]; a++)
	{
	if (b[a] < '0' || b[a] > '1')
	return (0);
	con_val = 2 * con_val + (b[a] - '0');
	}

	return (con_val);
}
