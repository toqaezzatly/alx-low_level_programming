#include "main.h"

/**
 * print_array - prints array
 *
 * Description: takes pointer and variable
 * @a: pointer
 * @n: variable
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			print("%d", a[i]);
	}
	_putchar('\n');
}
