#include "main.h"

/**
 * print_numbers - prints numbers and followed by a new line
 *
 * Return: numbers from 0 up to 9
 */

void print_numbers(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
	_putchar(s + '0');
	}
	_putchar('\n');
}
