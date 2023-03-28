#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void RandPassGen(int n)
{
	int x = 0;
	int randomizer = 0;
	srand((unsigned int)(time(NULL)));
	char numb[] = "0123456789";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char symb[] = "!@#$^&*?";
	char password[n];
	randomizer = rand() % 4;

	for (x = 0; x < n; x++)
	{
		if (randomizer == 1)
		{
			password[x] = numb[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[x]);
		}
		else if (randomizer == 2)
		{
			password[x] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[x]);
		}
		else if (randomizer == 3)
		{
			password[x] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[x]);
		}
		else
		{
			password[x] = symb[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[x]);
		}
		
	}
}

int main()
{
	int n = 10;
	/*where n = length of password to be generated*/

	RandPassGen(n);
	/*the above line is the function call*/

	return (0);
}
