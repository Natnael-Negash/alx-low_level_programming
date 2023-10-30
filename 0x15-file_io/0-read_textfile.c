#include "main.h"
#include "fcntl.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>


/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * Or the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t a, b, c;

	char *buf;

	if (filename == NULL)
		return (0);


	buf = malloc(sizeof(char) * letters);
	if (buf ==  NULL)
		return (0);


	a = open(filename, O_RDONLY);
	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(a);

	return (c);
}
