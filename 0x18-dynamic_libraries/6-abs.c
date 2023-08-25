#include "main.h"

/**
 * _abs - writes the absolute value of an interger
 *
 * @n: a number to be created
 *
 * Return: absolute values or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
