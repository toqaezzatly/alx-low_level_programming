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
	for (int i = 0; i  <= n; i++)
	{
		_putchar('_');
	}
	_putchat('\n');
}
