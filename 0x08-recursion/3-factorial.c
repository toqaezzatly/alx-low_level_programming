#include "main.h"
/**
 * factorial -  calcutes the factoria of the number
 * @n: given number
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
