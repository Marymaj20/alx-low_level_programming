#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a given file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise it returns 1 (success).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, w, text_len = 0;
/*file_des is the file descriptor for the opened file*/
/*w represents the write operation*/
/*text_len is used to store the string length*/

	if (filename == NULL)
/*NULL indicates that the filename is not provided*/
		return (-1);/*failure*/

	if (text_content != NULL)
/*calculates the string length*/
{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	file_des = open(filename, O_WRONLY | O_APPEND);
	w = write(file_des, text_content, text_len);

	if (file_des == -1 || w == -1)
		return (-1);/*indicates failure*/

	close(file_des);

	return (1);/*indicates success*/
}
