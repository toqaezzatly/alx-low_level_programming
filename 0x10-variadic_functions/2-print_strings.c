#include "variadic_functions.h"
/**
 * make_nil - change s to be "(nil)" if s is null
 * @s: string to be used
 *
 * Return: pointer to @s
 */

char *make_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";

	return (s);
}

/**
 * print_strings - print strings
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);

	for (; i < n; i++)
	{
		printf("%s", make_nil(va_arg(ptr, char *)));
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
