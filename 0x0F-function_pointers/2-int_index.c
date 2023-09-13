#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array containing elements to be searched
 * @size: size of an array
 * @cmp: pointer to fun
 *
 * Return:-1 -> no match or -size
 * if match retuneb index of the element in the array
*/

int int_index(int *array, int size, int(*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index] != 0))
			return (index);
	}

	return (-1);
}
