#include <variadic_functions.h>
#include <stdarg.h>
/**
 * print_numbers - prints number followed by a seperator
 * @seprator: printed between numbers
 * @n: integer to passed to the function
 * @...: A variable number of number to be printed 
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned index;

	va_start(nums, num);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != NULL && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);

}

