#include <unistd.h>

/**
 * _putchar - wrtites code
 *
 * @c - the character to print
 *
 * Return: Always 1 Success
 *
 * On error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
