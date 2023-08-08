#include "main.h"
/**
 * str_concat - concatenates two string using dymaically
 * @s1: string to be concatenated to
 * @s2: string to concatenate
 * Return: NUll -> fail to allocate or poriter to newly allocated
*/
char *str_concat(char *s1, char *s2)
{int size1 = 0, size2 = 0, tsize, k = 0;
char *p1;
int i, j;

for (; s1[size1] != '\0'; size1++)
;
for (; s2[size2] != '\0'; size2++)
;
tsize = size1 + size2;

if (tsize == 0)
	return (NULL);
p1 = malloc(tsize + 1);
for (i = 0; i < size1; ++i)
{
p1[i] = s1[i];
}
for (j = size1; j < tsize; ++j)
{
p1[j] = s2[k++];
}
return (p1);
}
