#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
	char *new;
	int i, len;
	if (str == NULL)
		return (NULL);

	len = 0;
	while (*str != '\0')
	len++;

	if (len == 0)
		return (NULL);
	new = (char *) malloc(len * sizeof(char));
	for(i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
