#include "main.h"
/**
 * print_binary - function prints binary representation
 * @n: integer num
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1); /*1000 0000 0000 0000 0000 0000 0000 0000 */
	int leadingzeros = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (mask)
	{
		if (leadingzeros == 1 && (n & mask) == 0)
			putchar('0');
		else if ((n & mask) != 0)
		{
			putchar('1');
			leadingzeros = 1;
		}
		mask >>= 1;
	}
	putchar('\n');
}
