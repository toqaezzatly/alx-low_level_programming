#include "main.h"
/**
* check_prime - real checker
* @n: number to be checked
* @divisor: helper arg
*
* Return: 0 | 1
*/
int check_prime(int n, int divisor)
{
if (divisor >= n && n > 1)
return (1);
if (n % divisor == 0 || n <= 1)
return (0);
return (check_prime(n, divisor + 1));
}
/**
* is_prime_number - checks if prime number
* @n: number to be checked
*
* Return: 1 -> prime 0 -> not prime
*/
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
