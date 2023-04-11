#include <stdio.h>
/**
 * main - Entry point that prints its own name, followed by a new line
 * @argc: The number of program arguments
 * @argv: The arrays that contain the program arguments.
 * Return: Return 0
 */


int main(int argc __attribute__((unused)), char *argv)
{
        printf("%s\n", argv[0]);
        return (0);
}
