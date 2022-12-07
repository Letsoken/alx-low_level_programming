#include "main.h"

/** 
  * read_textfile - Reads a text file and prints it to POSIX stdout.
  * @filename: A pointer to the name of the file.
  * @letters: The number of letters the
  *           function should read and print.
  * Return: If the function fails or filename is NULL - 0.
  *         else, the actual number of bytes the function can read and print.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);


	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	
	o = open(filename, O_RDONLY);

	if(o == -1)
	{
		free(buff);
		return (0);
	}

	r = read(o, buff, letters);

	if(r == -1)
	{
		free(buff);
		return (0);
	}
	
	w = write(STDOUT_FILENO, buff, r);

	if(w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);

	close(o);
	return ((ssize_t) w);
}
