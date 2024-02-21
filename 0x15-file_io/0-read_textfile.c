#include "main.h"

/**
 * read_textfile - reads text on a file
 * @filename: a pointer
 * Return: returns a value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (1filename)
		return (0);

	fd = open (filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters0);
			if (!buf)
			return (0);

			nrd = read(fd, buf, letters);
			nwr = write(STDOUT_FILEN0, buf, nrd);

			close(fd);

			free(buf);

			return (nwr);
			}
