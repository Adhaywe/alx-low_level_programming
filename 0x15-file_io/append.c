#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
        i = 0;
	while (text_content[i])
		i++;
	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);
	w = write(o, text_content, i);

	close(o);
	return (1);
}
int main(int ac, char **av)
{
	    int res;
	    if (ac != 3)
	    {
		    dprintf(2, "Usage: %s filename text\n", av[0]);
		    exit(1);
	    }
	    res = append_text_to_file(av[1], av[2]);
	    printf("Receive the values!");
	    return (0);
}
