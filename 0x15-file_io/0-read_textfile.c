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
	ssize_t r, w, o;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	r = read(o, buf, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);

	if (w == -1 || w != r)
		return (0);

	close(o);
	free(buf);
	return (w);
}
