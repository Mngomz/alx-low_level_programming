#include "main.h"

/**
 * largest_number - prints the largest of three intergers
 *
 * @m: first interger
 *
 * @n: second interger
 *
 * @o: third interger
 *
 * Return: largest number
 */

int largest_number(int m, int n, int o)
{
	int largest;

	if (m >= n && m >= o)
	{
	largest = m;
	}
	else if (n >= m && n >= o)
	{
	largest = n;
	}
	else
	{
	largest = o;
	}

	return (largest);
}
