#include "main.h"

/**
 * _sqrt_helper - helps calculate the natural square root using recursion.
 * @n: number to find the square root of
 * @i: iterator, tests all possibilities
 *
 * Return: the natural square root, or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
