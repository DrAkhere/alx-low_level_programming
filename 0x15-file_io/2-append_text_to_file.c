#include "main.h"
/**
 * append_text_to_file - Entry point that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 * Return: Return 1 on success & also file exist
 * cont': -1 on failure, filename = NULL, file don't exist &requires permission
 * NB: Do not create the file if it does not exist
 * If text_content is NULL, do not add anything to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int textFile, appendChar, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	textFile = open(filename, O_WRONLY | O_APPEND);
	if (textFile == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		appendChar = write(textFile, text_content, len);
		if (appendChar != len)
			return (-1);
	}
	close(textFile);
	return (1);
}
