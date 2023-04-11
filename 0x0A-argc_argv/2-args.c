#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point that prints minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int ch;
	int i = 0;
	int ans;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        ch = atoi(argv[i + 1]);
        ans = 0;

        if (ch < 0)
        {
                printf("0\n");
                return (0);
        }

        for (; i < 5 && ch >= 0; i++)
        {
                while (ch >= coins[i])
                {
                        ans++;
                        ch -= coins[i];
                }
        }

        printf("%d\n", ans);
        return (0);
}
