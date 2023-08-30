#include "main.h"
/**
 * _pow_recursion - x power y
 * @x: base
 * @y: power
 *
 * Return: x ^ Y
*/
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	y--;
	return (x * _pow_recursion(x));
}
