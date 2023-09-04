#include "main.h"

/**
 * read_textfile - check the code
 *
 * @filename: fname
 * @letters: lt
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ft;
	ssize_t bye;
	char st[buf * 8];

	if (!filename || !letters)
		return (0);
	ft = open(filename, O_RDONLY);
	if (ft == -1)
		return (0);
	bye = read(ft, &st[0], letters);
	bye = write(STDOUT_FILENO, &st[0], bye);
	close(ft);
	return (bye);
}
