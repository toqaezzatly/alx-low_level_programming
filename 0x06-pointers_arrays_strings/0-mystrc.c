#include <stdio.h>
#include <stdlib.h>
#include "string.h"
char *mystrcat(char *dest, char *src);

int main()
{
     char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = mystrcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);



    return 0;
}

char *mystrcat(char *dest, char *src)
{
    int j = strlen(dest); //index variable

    while (*src != '\0') {
      dest[j++] = *src++; //inserting chars one by one
    }
    dest[j] = '\0'; //adding null termination
    return dest;
}

