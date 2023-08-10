#include "main.h"
/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: 1st string
 * @s2: 2nd
 * @n: number of string to be concatenated followed by NULL
 * Return: Pointer to the result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{char *res;
unsigned int len1, len2, len3;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

res = malloc(len1 + n + 1);

if (res == NULL)
return (NULL);

memcpy(res, s1, len1);
memcpy(res + s1, s2, n);

res[len1 + n] = '\0';

return (res);
}
