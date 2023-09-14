#include "var_func.h"
/**
 * print_numbers - print number
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i = 0;

	va_start(ptr, n);

	for(; i < n; i++)
	{
		printf(va_arg(ptr, int));
		if(separator != NULL)
			printf(separator);
	}
	va_end(ptr);
}
