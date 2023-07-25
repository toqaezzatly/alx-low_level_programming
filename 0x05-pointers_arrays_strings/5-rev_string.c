#include "main.h"

/**
 * rev_string  - prints string reversely
 *
 * @s: pointer
 * Description: takes pointer to the  first letter in string
 *
 * Return - void -> prints
*/
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(i);
	_putchar('\n');
}
