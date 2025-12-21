#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;          /* argv istifadə olunmur, warning qarşısı alınır */
	printf("%d\n", argc - 1);
	return (0);
}
