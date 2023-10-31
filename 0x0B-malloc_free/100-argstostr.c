#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;/*+1 -> '\n'*/

	str = malloc((len + 1) * sizeof(char)); /* +1 -> \0*/
	if (str == NULL)
		return (NULL);

	str[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	return (NULL);
}
