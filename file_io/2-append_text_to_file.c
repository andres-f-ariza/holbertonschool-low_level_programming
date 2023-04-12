#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, aux, txt_len;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1 || (text_content == NULL && fd == -1))
		return (-1);
/**
 *This line opens the file with read-write access and sets the file pointer to
*the end of the file (O_APPEND). If the open system call fails or if
*text_content is NULL and the file is not open, the function returns -1.
 */
	if (text_content)
	{
		for (txt_len = 0; text_content[txt_len]; txt_len++)
			continue;
		aux = write(fd, text_content, txt_len);
		if (aux == -1)
			return (-1);
	}

	/**
*If text_content is not NULL, the function calculates the length of the
*string using a loop that counts the number of characters until the null
*terminator. Then, the function writes the text content to the end of the file
*using the write system call. If the write system call fails,
*the function returns -1.
*/
	close(fd);
	return (1);
}
/**
 *the function closes the file and returns 1 to indicate success.
 */
