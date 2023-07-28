#include "main.h"

/**
 * print_number - print integer without using long,pointer or array
 * @n: number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}
