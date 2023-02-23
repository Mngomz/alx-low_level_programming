#include "main.h"

/**
 * print_square - will print a square
 *
 * @size: number of times
 *
 * Return: empty
 */

void print_square(int size)
{
	int p, q;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (p = 0; p < size; p++)
	{
	for (q = 0; q < size; q++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
