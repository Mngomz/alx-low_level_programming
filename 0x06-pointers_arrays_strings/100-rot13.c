#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: input string.
 *
 * Return: the pointer to dest.
 */

char *rot13(char *str)
{
	int k = 0, i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + k) != '\0')
	{
	for (i = 0; i < 52; i++)
	{
	if (*(str + k) == alph[i])
	{
	*(str + k) = rot13[i];
	break;
	}
	}
	k++;
	}

	return (str);
}
