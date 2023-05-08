#include "main.h"

/**
 * append_text_to_file - Append text of the file,
 * @filename: points towards file name,
 * @text_content: adds string at the file,
 *
 * Return: If function fails return NULL - -1
 * while not existing,user lacks writing permissions - -1,
 *  Otherwise print - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}

