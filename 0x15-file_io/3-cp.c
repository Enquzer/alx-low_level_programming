#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/*
 * create_buffer - allows 1024 bytes
 * @file: name of file
 * Return: a pointer to newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, 
				"Error: Can't write to %s\n", file);
	}

	return (buffer);
}

/**
 * close_file - closes file
 * @fd: file descriptor closed
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
	}
}

/**
 * main - Entry Point
 * create_buffer - allocates 1024 bytes for buffer
 * @argc: # of args
 * @argv: array pointer for args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprinf(STDERR_FILENO, Error :
					"Can't read from file NAME_OF_THE_FILE %S\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);

		if ((to = w) == -1)
		{
			dprint(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
			exit(99);
		}

		r = read(from, buffer, 1022);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0);
	{
	free(buffer);
	close_file(from);
	close_file(to);
	}
	return (0);
}
