#include "main.h"

/**
 * puts_half - prints half a string
 *
 * Description: any thing
 *
 * @str: pointer to 1st char
 *
 * Return: void -> print
*/

void puts_half(char *str)
{
	int i;

	for ((i = _strlen(str) / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
