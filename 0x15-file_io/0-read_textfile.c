#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w (the actual number of bytes read and printed)
 * also returns 0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer; /*stores the buffer*/
	ssize_t file_des; /*file descriptor*/
	ssize_t no_w; /* number of bytes written*/
	ssize_t result; /*result of the read operation*/

/*this opens the file using the open system call*/
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0); /*indicates failure*/
/*memory is allocated dynamically using malloc*/
	buffer = malloc(sizeof(char) * letters);
/*the number of bytes read is stored in result*/
	result = read(file_des, buffer, letters);
/*the number of bytes successfully written is stored in no_w*/
	no_w = write(STDOUT_FILENO, buffer, result);

	free(buffer);/*frees the memory*/
	close(file_des); /*closes the file description*/
/*returns the number of bytes read and printed*/
	return (no_w);
}
