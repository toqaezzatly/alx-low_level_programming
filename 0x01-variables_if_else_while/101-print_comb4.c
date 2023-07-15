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
	int num = 0, n = 0, number = 0;

	while (n <= 9)
	{
		num = n + 1;
		while (num <= 9)
		{
			number = num + 1;
			while (number <= 9)
			{
				putchar(n + '0');
				putchar(num + '0');
				putchar(number + '0');
				if (n == 7 && num == 8 && number == 9)
					break;
				putchar(',');
				putchar(' ');
				number++;
			}
			num++;
		}
		n++;
	}

	putchar('\n');
	return (0);
}
