#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int create_file(const char *filename, char *text_content)
{
	int o, w, i;
	char *buffer;

	if (filename == NULL)
		return (-1);
        
	i = 0;
	if (text_content[i])
		i++;

	o = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);
	
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
	res = create_file(av[1], av[2]);
	printf("Received the values\n");
	return (0);
}
