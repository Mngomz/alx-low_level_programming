#include "main.h"

/**
 * _isdigit - runs to check for a digit
 *
 * #c: tests for a digit
 *
 * Return: 1 for all the digits otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
