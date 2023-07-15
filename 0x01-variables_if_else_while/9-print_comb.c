#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Printing lower case of alphabet using putchar ()
 *
 * Return: 0 (success)
*/
int main(void)
{
	int num  = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');
	return (0);
}
