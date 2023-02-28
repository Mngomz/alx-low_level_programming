#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: input string
 *
 * Return: empty
 */

void puts2(char *str)
{

	int p;
	int q = 0;

	while (str[q] != '\0')
	{
	q++;
	}

	for (p = 0; p < q; p += 2)
	{
	_putchar(str[p]);
	}
	_putchar('\n');
}
