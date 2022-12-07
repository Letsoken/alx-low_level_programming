#include "main.h"

/**
  * create_file - creates a new file and writes text content into it..
  * @filename: A pointer to the name of the file.
  * @text_content: NULL terminated string to write to the file
  * Return: If the function fails or filename is NULL - -1.
  *         else, returns 1.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, l;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	l = 0;
	while (*(text_content + l))
		l++;
	w = write(fd, text_content, l);
	if (w == -1)
	{
		return (0);
	}

	close(fd);
	return (1);
}
