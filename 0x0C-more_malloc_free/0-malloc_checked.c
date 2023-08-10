#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * This function uses the malloc function to allocate a block of memory of
 * size bytes. If the allocation fails, the function prints an error message
 * to stderr and terminates the program with a status value of 98.
 *
 * Return: On success, a pointer to the allocated memory. On failure, the
 * function terminates the program with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
    void *p = malloc(b);

    if (p == NULL)
    {
        exit(98);
    }

    return (p);
}

