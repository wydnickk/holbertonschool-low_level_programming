#include <stdio.h>
#include "main.h"

/**
 * main - test _islower
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", _islower('H')); /* gözlənən 0 */
	printf("%d\n", _islower('o')); /* gözlənən 1 */
	printf("%d\n", _islower('z')); /* gözlənən 1 */
	printf("%d\n", _islower('0')); /* gözlənən 0 */
	return (0);
}
