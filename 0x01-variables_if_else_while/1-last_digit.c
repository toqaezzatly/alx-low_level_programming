#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: greater , smaller or equal to 5 
 * Return: 0 (success)
*/
int main(void)
{
	int n;
	char digit;

	srand(time(0));
        n = rand() - RAND_MAX / 2;
	digit = n % 10;
        if (digit > 0)
                printf("Last digit of %i is %c and is greater than 5\n", n, digit);
        else if (digit  == 0)
                printf("Last digit of %i is %c and is 0\n", n, digit);
        else if (digit < 6 && digit != 0)
                printf("Last digit of %i is %c and is less than 6 and not 0\n", n, digit);
        return (0);
}
