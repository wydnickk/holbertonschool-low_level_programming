#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* əvvəlcə kiçik hərflər a-z */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	/* sonra böyük hərflər A-Z */
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	/* sonda yeni sətr */
	putchar('\n');

	return (0);
}
