#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Upper & lower
 *
 * Return: 0 (success)
*/
int main(void)
{
	char letter = 'a', LETTER = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER++;
	}
	putchar('\n');
	return (0);
}
