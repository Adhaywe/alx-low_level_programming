#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX std out
 * @filename: a pointer to the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, c, let;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL && filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	let = read(fd, text, letters);
	if (let == -1)
		return (0);
	
	buf[letters] = '\0';

	c = write(1, buf, let);
	if (c == -1)
		return (0);

	close(fd);
	free(buf);
	return (c);
}
