#include "main.h"

/**
 * _sqrt_helper - A helper function for _sqrt_recursion to find sqrt recursively.
 * @n: The number to find sqrt of.
 * @i: The test divisor (starts at 0 and increases).
 * 
 * Return: The natural sqrt or -1 if not found.
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
 * _sqrt_recursion - Returns the natural square root of n using recursion.
 * @n: Number to find sqrt of.
 *
 * Return: The natural square root, or -1 if no natural root exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
