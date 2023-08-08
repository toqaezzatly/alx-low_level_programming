#include "main.h"
/**
 * _strdup - duplicate a string in memory dynamically
 * @str: pointer to arrat/ string to be duplicated
 * Return: NUll or ponter to duplicated string
*/
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *pchar;

	for (; str[size] != '\0'; size++)
	;

	pchar = malloc(size * sizeof(char));

	if (pchar == 0)
		return (NULL);

	for (; i < size; i++)
		pchar[i] = str[i];

	return (pchar);

}
