#include <main.h>
/**
 * create_array - creats array using dynamic allocation
 * @size: number of bytes
 * @c: characters
 * Return: NUll || pointer to arrat
*/
char *create_array(unsigned int size, char c)
{ char *pchar = malloc(size * sizeof(char));
if (size == 0 || pchar == 0)
return (NULL);
while (size--)
pchar[size] = c;
return (c);
}
