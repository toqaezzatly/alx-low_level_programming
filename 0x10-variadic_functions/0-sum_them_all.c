#include "variadic_functions.h"
/**
 * sum_them_all - sum in varadic number of args
 * @n: number of args to summed
 *
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
