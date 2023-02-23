#include "main.h"

/**
 * print_diagonal - will draw a diagonal line on the terminal
 *
 * @n: counts the number of times the character is printed
 *
 * Return: empty
 */

void print_diagonal(int n)
{
	int g, h;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (g = 0; g < n; g++)
	{
	for (h = 0; h < g; h++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
