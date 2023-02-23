#include "main.h"

/**
 * _isupper - checks for uppercase characher
 *
 * @c: tests for uppercase
 *
 * Return: 1 if uppercase otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
	return (1);
	}
	return (0);
}
