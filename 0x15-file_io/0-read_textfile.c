#include "main.h"

/**
 * read_textfile - Entry point that reads a text file & print to POSIX stdout
 * @filename: The address pointer to the text file
 * @letters: The number of letters it should read and print
 * Return: Return 0 if filename is NULL / if write fails /  does not write the
 * con't: expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int textFile, writeDone, readStart;
	char *buffer;

	if (filename == NULL)
		return (0);
	textFile = open(filename, O_RDONLY);
	if (textFile == 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	readStart = read(textFile, buffer, letters);
	if (readStart == -1)
		return (0);
	writeDone = write(STDOUT_FILENO, buffer, readStart);
	if (writeDone == -1)
		return (0);
	close(textFile);
	free(buffer);
	return (writeDone);
}
