#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: printing alphabet _putchar
 *
 * Return: 0 (success)
*/
void  print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	_putchar(i);
	_putchar('\n');
}
