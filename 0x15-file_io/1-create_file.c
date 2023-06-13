#include "main.h"
#include <stdlib.h>


#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *         Otherwise returns    1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, w, text_len = 0;
/*file_des is the file descriptor*/
/*w is the result of the write operation*/
/*text_len stores the length of the string*/
	if (filename == NULL)
		return (-1); /*failure*/

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_des, text_content, text_len);

	if (file_des == -1 || w == -1)
		return (-1);/*failure*/

	close(file_des);

	return (1);/*success*/
}
