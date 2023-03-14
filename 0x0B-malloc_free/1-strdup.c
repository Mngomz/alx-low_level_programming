#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 *
 * @str: string
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	int j = 0, i = 1;
	char *f;

	if (str == NULL)
	return (NULL);

	while (str[i])
	{
	i++;
	}

	f = malloc((sizeof(char) * i) + 1);

	if(f == NULL)
	return (NULL);

	while (j < i)
	{
	f[j] = str[j];
	j++;
	}
	f[j] = '\0';
	return(f);
}
