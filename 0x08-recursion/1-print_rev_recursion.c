#include "main.h"

/**
 * _print_rev_recursion - printing reversely
 *
 * @s: pionter to charcter
*/

void _print_rev_recursion(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		i = i;

	for (j = i; j >= 0; j--)
	{
		_putchar(*s);
		_print_rev_recursion((s - j));
	}

}
