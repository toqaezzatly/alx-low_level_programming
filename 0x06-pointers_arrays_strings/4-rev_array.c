#include "main.h"

/**
 * reverse_array - reversing array and keep it to be printed using another fn
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}

}
