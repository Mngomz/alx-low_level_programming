#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: input integer array
 *
 * @size: size of the array
 *
 * @cmp: pointer to be used to compare values
 *
 * Return: return -1. If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
	if (cmp(array[i]))
	return (i);
	i++;
	}
	}
	}
	return (-1);
}
