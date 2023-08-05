#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%s\n", argc - 1);
	return (0);
}
