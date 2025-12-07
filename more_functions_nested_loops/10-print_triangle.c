#include "main.h"

/**
 * print_triangle - prints a triangle using the '#' character
 * @size: size of the triangle
 *
 * Description: If size is 0 or less, the function prints only a newline.
 */
void print_triangle(int size)
{
	int row, col, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (spaces = 0; spaces < size - row; spaces++)
			_putchar(' ');
		for (col = 0; col < row; col++)
			_putchar('#');
		_putchar('\n');
	}
}
