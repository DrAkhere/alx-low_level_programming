#include "main.h"
/**
 * main - Entry point that copies the content of a file to another file
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	int txtFil, filTxt, readFile, writeDone, textFileClosed, fileTextClosed;
	char *buffer[BUFFERSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	txtFil = open(argv[1], O_RDONLY, 0);
	if (txtFil == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	filTxt = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (filTxt == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((readFile = read(txtFil, buffer, BUFFERSIZE)) > 0)
	{
		writeDone = write(filTxt, buffer, readFile);
		if (writeDone != readFile)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (readFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	textFileClosed = close(txtFil);
	if (textFileClosed != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close txtfil %d\n", txtFil);
		exit(100);
	}
	fileTextClosed = close(filTxt);
	if (fileTextClosed != 0)
		dprintf(STDERR_FILENO, "Error: Can't close filTxt %d\n", filTxt), exit(100);
	return (0);
}
