#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: array of intergers
 *
 * @n: number of elements of the array
 *
 * Return: no return.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
	printf("%d", *(a + i));
	}
	if (i != (n - 1))
	{
	printf(", ");
	}
	printf("\n");
}
