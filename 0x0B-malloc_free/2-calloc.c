#include "main.h"
/**
 * _calloc -  reserves space in memory
 * @nmemb: number of elements
 *
 * @size: size of each elelment
 * Return: NULL or pointer to first element
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{int tsize = nmemb * size;
void *ptr = malloc(tsize);
if (nmemb == 0 || size == 0)
return (NULL);
memset(ptr, 0, tsize);
return (ptr);
}
