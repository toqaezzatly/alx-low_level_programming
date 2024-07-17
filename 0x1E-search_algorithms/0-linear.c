#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located.
 *         If value is not present in array or if array is NULL, returns -1.
 *
 * Description: This function searches for a given value in an array
 * using the Linear search algorithm. It iterates through each element
 * of the array and prints each value it checks. If the value is found,
 * it returns the index of the first occurrence of the value. If the value
 * is not found or if the array is NULL, it returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
