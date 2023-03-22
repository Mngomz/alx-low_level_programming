#include "function_pointers.h"

/**
 * array_iterator - executes parameter function on each element in array
 *
 * @array: input integer array.
 *
 * @size: size of the array
 *
 * @action: pointer to the function.
 *
 * Return: Empty
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	i++;
	}
	}
}
