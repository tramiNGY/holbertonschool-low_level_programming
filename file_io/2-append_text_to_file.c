#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end
 * of the file
 * Return: returns -1 if filename or text_content NULL
 * or if file does not exist or if do not have permissions required
 * returns 1 if file exists
*/

int append_text_to_file(const char *filename, char *text_content)
{
int filedescriptor;
int length;
ssize_t lettersprint;

	length = 0;
	while (text_content != NULL && text_content[length] != '\0')
		length++;

	if (filename == NULL)
		return (-1);

	filedescriptor = open(filename, O_WRONLY | O_APPEND);
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
	return (1);
}
