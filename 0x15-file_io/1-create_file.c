#include "main.h"
/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (file == -1)
		return (-1);

	w =  write(file, text_content, len);
	if (w == -1)
		return (-1);

close(file);

return (1);
}
