#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read file and print output as STDOUT,
 * @filename: read text file,
 * @letters: letter number for execution
 * Return: actual number and 0 when  function fails while  filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tread;
	ssize_t fn;
	ssize_t y;
	ssize_t z;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	tread = malloc(sizeof(char) * letters);
	z = read(fn, tread, letters);
	y = write(STDOUT_FILENO, tread, z);

	free(tread);
	close(fn);
	return (y);
}
