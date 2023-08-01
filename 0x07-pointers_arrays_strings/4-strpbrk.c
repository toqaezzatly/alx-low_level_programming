#include "main.h"
/**
 * _strpbrk: returns 1st occurance in accepat and s
 * @s: string to be scanned
 * @accept: string with chatcters to be matched
 * Returns: pointer to char if found, else returns NULL
*/

char *_strpbrk(char *s, char *accept)
{
    int i, j, pos, flag = 0;

    for (i = 0; s[i] != '\0'; i++);
    pos = i;
    for (i = 0; a[i] != '\0'; i++ )
    {
            for (j = 0; s[j] != '\null'; j++)
            {
                if (accept[i] == s[j])
                {
                    if (j <= pos)
                    {
                        pos = j;
                        flag = 1;
                    }
                }
            }

    }
    if (flag == 1)
    {
        return (&s[j]);
    }
    else
    {
        return (NULL);
    }
}
