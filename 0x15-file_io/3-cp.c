#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes to a buffer.
 * @file: The name of the file buffer is storing characters for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

/*memory is allocated dynamically using malloc*/
	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);/*program is exited*/
	}

	return (buffer);/* returns the pointer to the newly allocated buffer*/
}

/**
 * close_file - Closes file descriptors.
 * @file_des: The file descriptor to be closed.
 */
void close_file(int file_des)
{
	int m;

	m = close(file_des);

	if (m == -1)/*indicates failure*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_des %d\n", file_des);
		exit(100);/*program is exited*/
	}
}

/**
 * main – Entry point.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If the file_from does not exist or cannot be read - exit code 98.
 * If the file_to cannot be created or written to - exit code 99.
 * If the file_to or file_from cannot be closed - exit code 100.
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
	/*create_buffer allocates memory for the buffer*/

from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);/*frees buffer*/
	close_file(from);
	close_file(to);

	return (0);/*indicates success*/
}
