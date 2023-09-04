#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: fname
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int k = 0;

	if (!s)
		return (0);

	while (*s++)
		k++;
	return (k);
}

/**
 * create_file - check the code
 *
 * @filename: fname
 * @text_content: cont
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int ft;
	ssize_t bye = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	ft = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ft == -1)
		return (-1);
	if (length)
		bye = write(ft, text_content, length);
	close(ft);
	return (bye == length ? 1 : -1);
}
