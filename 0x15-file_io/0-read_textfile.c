#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that Reads text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

<<<<<<< HEAD
     text = malloc(sizeof(char) * letters + 1);
     if (text == NULL && filename == NULL)
         return (0);
     fd = open(filename, O_RDONLY);
     if (fd == -1)
     {
         free(text);
         return (0);
     }
     let = read(fd, text, letters);
     c = write(STDOUT_FILENO, text, let);
     close(fd);
     return (c);
=======
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
>>>>>>> e33e62dc388b8aededd228040b2f88f8bf62149a
}
