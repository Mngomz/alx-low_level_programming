#include "main.h"

/**
 * print_line - will print a straight line
 *
 * @n: count the number of times for the character
 *
 * Return: a straight line
 */

void print_line(int n)
{
	int w;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (w = 0; w < n; w++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
