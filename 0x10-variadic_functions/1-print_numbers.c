#include "variadic_functions.h"
/**
 * print_numbers - print number
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);

	for (; i < n; i++)
	{
		printf("%i", va_arg(ptr, int));
		if (separator != NULL || i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
