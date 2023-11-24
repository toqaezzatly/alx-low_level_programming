#include "main.h"
/**
 * get_bit - fun gets a bit at index
 * @n: the num to get bit from
 * @index: the index where the bit get at
 * Return: value of the bit or 1 if error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int masked = 0x01;

	masked <<= index;

	if (masked == 0)
		return (-1);

	if (n & masked)
		return (1);

	else
		return (0);
}
