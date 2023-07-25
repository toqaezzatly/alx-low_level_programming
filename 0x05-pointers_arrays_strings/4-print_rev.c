#include "main.h"

/**
 * print_rev - prints string reversely
 *
 * @s: pointer
 * Description: takes pointer to the  first letter in string
 *
 * Return - void -> prints
*/

void print_rev(char *s)
{
	int len = 0, i = 1;

	s = s + len;
	for (i = 0; i <= len; i++)
		printf("%c", *(s--));

}
