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
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');

}
