#include <stdio.h>
#include "main.h"
/**
 * _islower - lower-cased
 *
 * C: is an integer ascii value
 *
 * Return:  1 ->  lower
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
