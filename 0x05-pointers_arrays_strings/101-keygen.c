#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int unlock, passwd;

	srand(time(NULL));
	unlock = 2772;
	while (unlock >= 127)
	{
		passwd = (rand() % 126) + 1;
		printf("%c", passwd);
		unlock -= passwd;
	}

	printf("%c", unlock);
	return (0);
}
