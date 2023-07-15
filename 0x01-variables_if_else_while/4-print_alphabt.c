#include <stdio.h>
/**
 * main - Entry point
 *
 * Decription: Exception
 *
 * Return: 0(Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
		letter++;
	}
	return (0);
}
