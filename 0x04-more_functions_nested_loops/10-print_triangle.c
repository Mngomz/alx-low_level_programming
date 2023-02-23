#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the output
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = size - a; b > 1; b++)
	{
	_putchar(12);
	}
	for (c = 0; c <= a; c++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
