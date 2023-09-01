#include "main.h"
/**
 * main - Entry point
 * @argc: size of array of argv
 * @argv: array of arument passed to main fn
 * Return: 0-> always
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
