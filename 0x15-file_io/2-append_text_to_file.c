#include "main.h"
/**
 * append_text_to_file - Entry Point
 * @filename: file nam
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	wr = write(file, text_content, len);
	if (wr == -1)
		return (-1);

	close(file);
	return (1);
}
