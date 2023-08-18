#include "lists.h"

/**
 * sum_dlistint - sum of all the data of a doubly list
 * @head: header
 * Return: data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
