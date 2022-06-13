#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * working on system call functions
 */
int main(int argc, char *argv[])
{
	int o;
	char buf[14];

	o = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
	
	if (o ==-1)
	{
		printf("Failed to create and open the file!\n");
		exit(1);
	}

	write(o, "Hello World!\n", 13 );
	close(o);

	o = open("myfile.txt", O_RDONLY);

	if (o == -1)
	{
		printf("Failed to open and read the file!\n");
		exit(1);
	}

	read(o, buf, 13);
	buf[13] = '\0';
	close(o);

	printf("buf: %s", buf);

	return (0);
}
