#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: amount of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *kon;
	unsigned int o, p, q, r;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (o = 0; s1[o] != '\0'; o++)
	;

	for (p = 0; s2[p] != '\0'; p++)
	;
	
	if (n > p)
	n = p;

	q = o + n;

	r = 0;

	kon = malloc(sizeof(char) * r + 1);

	if (kon == NULL)
	return (NULL);

	for (r = 0; r < q; r++)
	if (r < o)
	kon[r] = s1[r];
	else
	kon[r] = s2[r - o];

	kon[r] = '\0';

	return (kon);
}
