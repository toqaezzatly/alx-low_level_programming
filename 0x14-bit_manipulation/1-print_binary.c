#include "main.h"
/**
 * print_binary - function prints binary representation
 * @n: integer num
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	int leadingzeros = 1;

	while (mask)
	{
		if (n & mask)
		{
			if (leadingzeros)
			{
				leadingzeros = 0;
			}
			putchar('1');
		}
		else if (!leadingzeros)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	putchar('\n');
}

