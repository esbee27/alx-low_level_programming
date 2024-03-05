#include "main.h"

/**read_textfile - reads a text file
 * @filename: the name of the file
 * @letters: the number of characters
 * Return: returns nr
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	nr = read(fd, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	close(fd);
	free(buf);

	return (nr);
}
