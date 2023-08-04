#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: number to be calculated
 * Return : -1 || 1 || integer
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
