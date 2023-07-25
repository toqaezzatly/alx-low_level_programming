#include "main.h"

/**
 * puts2 - 0 skip 1 ..etc
 *
 * Description: Don't print every thing u find
 * @str: pointer to  1st
 *
 * Return: void -> print
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] = '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');

}
