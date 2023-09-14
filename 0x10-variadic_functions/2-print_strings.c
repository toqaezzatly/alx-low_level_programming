#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i = 0;

	va_start(ptr, n);

	for(; i < n; i++)
	{
		printf("%i", va_arg(ptr, int));
		if(separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
