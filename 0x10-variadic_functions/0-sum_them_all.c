#include "variadic_functions.h"
/**
 *  sum_them_all - sum all input no matter how many inputs
 * @n: variable name
 * Return: sum
*/
int sum_all_them(const unsigned int n, ...)
{
	va_list args; /* pointer to list */
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
