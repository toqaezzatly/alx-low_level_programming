#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of value in array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] >= value || prev >= size)
			break;
		prev += step;
	}
	prev -= step;
	for (i = prev; i < size && i < prev + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

