#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: two concantenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	t = malloc(sizeof(char) * (i + j + 1));

	if (t == NULL)
	{
	free(t);
	return (NULL);
	}

	for (k = 0; k < i; k++)
	t[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
	t[k] = s2[j];

	return (t);
}
