#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: size of array of argv
 * @argv: array of arument passed to main fn
 * Return: 0-> always
*/
int main(int argc, char *argv[])
{
	(void)argc;
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
