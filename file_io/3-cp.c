#include "main.h"

/**
 * closeandfree - Closes file descriptors and frees buffer
 * @fd1: First file descriptor
 * @fd2: Second file descriptor
 * @buff: Buffer to free
 */

/**
 *hich is a helper function that will be used later in the code. It takes in
 *two file descriptors (fd1 and fd2) and a buffer (buff) as arguments.
 */
void closeandfree(int fd1, int fd2, char *buff)
{
	close(fd1);
	close(fd2);
	free(buff);
}

/**
 * copy_file - copies a file.
 * @file_from: File from copy
 * @file_to: File to copy.
 * Return: 1 on success, -1 on fail
 */

int copy_file(const char *file_from, const char *file_to)
{
	/**
	 *which takes in two file names (file_from and file_to) as arguments and
	 *returns an integer. It will copy the contents of file_from to file_to
	 */
	int fd1, fd2, lenfrom, lento, aux;
	char *buff;
	/**
	 *These lines declare several variables that will be used in the
	 *copy_file() function. fd1 and fd2 are file descriptors for the source
	 *and destination files, respectively. lenfrom and lento are the length
	 *of the data read from and written to the files, respectively. aux is
	 *used to store the result of various system calls, and buff is a buffer
	 *that will hold the data read from file_from.
	 */
	lenfrom = 1;
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		return (-1);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		return (-2);
	/**
	 *These lines open the source and destination files using open() system
	 *call. O_RDONLY and O_CREAT | O_WRONLY | O_TRUNC are the flags used to
	 *open the files. If there is an error opening the files, the function
	 *returns -1 or -2, respectively.
	 */
buff = (char *)malloc(sizeof(char) * 1024);
if (buff == NULL)
return (0);
/**
 *This line allocates memory for the buff buffer using the malloc() function. If
 *malloc() returns NULL, the function returns 0.
 */
while (lenfrom > 0)
{
	lenfrom = read(fd1, buff, 1024);
	if (lenfrom == -1)
	{
		closeandfree(fd1, fd2, buff);
		return (-1);
	}
	lento = write(fd2, buff, lenfrom);
	if (lento == -1)
	{
		closeandfree(fd1, fd2, buff);
		return (-2);
	}
}
/**
 *This loop reads data from file_from in 1024-byte chunks using the read()
 *system call and stores it in buff. It then writes the data to file_to using
 *the write() system call. If there is an error during either of these
 *operations, the function returns -1 or -2, respectively.
 */
aux = close(fd1);
if (aux == -1)
	return (fd1);
aux = close(fd2);
if (aux == -1)
	return (fd2);
free(buff);
return (1);
/**
 *These lines close the file descriptors fd1 and fd2 using the close() system
 *call and free the memory allocated for buff using the free() function. If
 *there is an error during either of the close() calls, the function returns the
 *corresponding file descriptor. If everything was successful, the function
 *returns 1.
/**
* main - Main function for cp
* @argc: argument counter
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int aux;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	aux = copy_file(argv[1], argv[2]);
	if (aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (aux == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (aux != 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", aux);
		exit(100);
	}
	return (0);
}
