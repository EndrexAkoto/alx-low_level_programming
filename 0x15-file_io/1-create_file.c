#include "main.h"

/**
 * create_file - Creates file to be executed
 * @filename: points towards the file to be created
 * @text_content: points towards the string where file created will be written
 *
 * Return: If the function fails - -1 if not - 1
 */
int create_file(const char *filename, char *text_content)
{
	int tread, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	tread = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0500);
	y = write(tread, text_content, z);

	if (tread == -1 || y == -1)
		return (-1);

	close(tread);

	return (1);
}
