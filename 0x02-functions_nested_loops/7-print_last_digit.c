#include "main.h"

/**
 * print_last_digit - prints out the lats digit of a number
 *
 * @s: creates a number
 *
 * Return: return a number or 0 if anything else
 */

int print_last_digit(int s)
{
	int last;

	last = s % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
