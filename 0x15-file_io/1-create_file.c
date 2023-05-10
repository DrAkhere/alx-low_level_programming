#include "main.h"

/**
 * creat_file - Entry point to create a new file
 * @filename: The name of the file to create
 * @text_content: The NULL terminated string to write to the file
 * Return: Return 1 on success, -1 on file = NULL & failure 
 * con't: failure means(file can't be created, written, write “fails”, etc)
 * NB: if the file already exists, truncate it
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int textFile, writeDone, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	textFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (textFile == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		writeDone = write(textFile, text_content, len);
		if (writeDone != len)
			return (-1);
	}
	close(textFile);
	return (1);
}
