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
     char *text;

     text = malloc(sizeof(letters));
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
}
