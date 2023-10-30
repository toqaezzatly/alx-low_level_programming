#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* str_concat - concatenates two strings
* @s1: string1
* @s2: string2
*
* Return: Pointer
*/
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL) s1 = "";

if (s2 == NULL) s2 = "";

size_t len1 = strlen(s1);
size_t len2 = strlen(s2);

char *s = malloc(len1 + len2 + 1);
if (s == NULL) return (NULL);

memcpy(s, s1, len1);
memcpy(s + len1, s2, len2 + 1);

return (s);
}
