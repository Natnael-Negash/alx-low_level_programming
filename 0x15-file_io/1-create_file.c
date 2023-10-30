#include "main.h"
#include "fcntl.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1 or - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int b, c, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(b, text_content, count);

	if (b == -1 || c == -1)
		return (-1);

	close(b);

	return (1);
}
