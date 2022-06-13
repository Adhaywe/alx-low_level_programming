#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * a program that reads a text file and prints it to the POSIX std output
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char* text;
	
	if (filename == NULL)
		return (0);
	
	text = malloc(sizeof(char) * letters);

	o = open(filename, O_RDONLY);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);
	
	if (w == -1 || r == -1 || o == -1)
	{
		free(text);
		return (0);
	}

	free(text);
	close (o);
	return (w);
}
int main(int argc, char *av[])
{
	ssize_t n;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}

