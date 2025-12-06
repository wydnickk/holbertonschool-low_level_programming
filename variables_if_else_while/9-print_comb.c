#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		/* rəqəmi yazırıq */
		putchar('0' + i);

		/* sonuncu rəqəm deyilsə, vergül və boşluq yazırıq */
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
