#include <stdio.h>
#include "main.h"

/**
 * main - test _isalpha
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", _isalpha('H')); /* expected 1 */
	printf("%d\n", _isalpha('o')); /* expected 1 */
	printf("%d\n", _isalpha('3')); /* expected 0 */
	printf("%d\n", _isalpha('%')); /* expected 0 */
	return (0);
}
