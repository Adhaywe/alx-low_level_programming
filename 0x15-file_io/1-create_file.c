#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a function
 * @filename: the name of the file
 * @text_content: string to be written to the file
 *
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	i = 0;
	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		write(fd, text_content, i);
	}

	close(fd);
	return (1);
}
