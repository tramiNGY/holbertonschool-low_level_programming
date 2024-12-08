#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: returns 0 if filename NULL
 * or if write failes or does not write expected amount
 * of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int filedescriptor;
char *buffer;
ssize_t lettersread;
ssize_t lettersprint;

	if (filename == NULL)
		return (0);

	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(filedescriptor);
		return (0);
	}

	lettersread = read(filedescriptor, buffer, letters);
	if (lettersread == -1)
	{
		free(buffer);
		close(filedescriptor);
		return (0);
	}

	lettersprint = write(STDOUT_FILENO, buffer, lettersread);
	free(buffer);
	close(filedescriptor);

	if (lettersprint == -1 || lettersprint != lettersread)
		return (0);

	return (lettersprint);
}
