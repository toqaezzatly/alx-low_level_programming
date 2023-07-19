#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing _putchar
 *
 * Return: 0 (success)
*/
int main(void)
{
	char word[] = "_putchar";

	for (int i = 0; i <= 7; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
