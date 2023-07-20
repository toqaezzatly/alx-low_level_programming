#include "main.h"

/**
 * _isupper - checks whether upper or not
 *
 * @c:input for alphabet
 *
 * Return: 1 if upper 0 else
*/

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
