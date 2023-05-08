#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile- Read text file then print letters
 *
 * @filename: file
 *
 * @letters: number of letters printed
 *
 * Return: number of letters printed,0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t wr;
	ssize_t rd;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	free(buf);

	return (wr);
}
