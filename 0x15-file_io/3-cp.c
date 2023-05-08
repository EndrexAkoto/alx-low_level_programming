#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer: 1024 buffer allocation
 * @file: character stored in a buffer
 *
 * Return: newly-allocated buffer of the pointer
 */
char *create_buffer(char *file)
void close_file(int fd);
{
	char *crb;

	crb = malloc(sizeof(char) * 1024);

	if (crb == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (crb);
}

/**
 * close_file - descriptor is closed
 * @fd: descriptor to be closed
 */
void close_file(int fd)
{
	int y;

	y = close(fd);

	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - content copied to another file
 * @argc: argument supplied to the program
 * @argv: argument pointed to array
 *
 * Return: 0 success
 *
 * Description: If  incorrect exit code 97
 * If file_from no exist or unreadable  exit code 98
 * If file_to cant be written or created exit code 99
 * If file_to or file_from cant be close exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *crb;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	crb = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, crb, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(crb);
			exit(98);
		}

		w = write(to, crb, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(crb);
			exit(99);
		}

		r = read(from, crb, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(crb);
	close_file(from);
	close_file(to);

	return (0);
}
