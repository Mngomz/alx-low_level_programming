#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 *
 * prints numbers excluding 2 and 4
 *
 * Return: output of numbers from 1 to 9
 */

void print_most_numbers(void)
{
	int d = 0;

	for (; d <= 9; d++)
	{
	if (d == 2 || d == 4)
	{
	continue;
	}
	else
	{
	_putchar(d + '0');
	}
	}
	_putchar('\n');
}
