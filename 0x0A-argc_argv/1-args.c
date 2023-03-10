#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
