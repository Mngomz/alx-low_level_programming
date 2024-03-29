#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 *
 * @size: size of the array.
 *
 * @c: storaged char
 *
 * Return: filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	a[i] = c;

	return (a);
}
