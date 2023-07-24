#include "main.h"

/**
 * swap_int - swaps 2 numbers using pointers
 * Description: resets value to 98
 * @a: pointer to value to be swapped
 * @b: pointer to value to be swapped
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
