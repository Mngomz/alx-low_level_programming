#include "main.h"

/**
 * _islower -detects lower characters
 *
 * @c: the character to be checked
 *
 * Return: 1 for lowcase characters or 0 if not a character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
