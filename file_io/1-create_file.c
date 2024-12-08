#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: returns 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int filedescriptor;
int length;
ssize_t lettersprint;

	length = 0;
	while (text_content[length] != '\0')
		length++;

	if (filename == NULL)
		return (-1);

	filedescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		lettersprint = write(filedescriptor, text_content, length);
		if (lettersprint == -1)
		{
			close(filedescriptor);
			return (-1);
		}
	}
	close(filedescriptor);
	return (-1);
}
