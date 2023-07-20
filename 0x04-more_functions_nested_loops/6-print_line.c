#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints '_' with _putcha
 * @n : number of _ per line
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int i = 0; i  <= n; i++)
		{
			_putchar('_');
		}
		_putchat('\n');
	}
}
