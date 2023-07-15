#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: numbers
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');
	return (0);
}
