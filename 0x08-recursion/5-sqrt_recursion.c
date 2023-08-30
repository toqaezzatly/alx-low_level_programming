#include "main.h"
/**
* _sqrt - helper function
* @n: number to be square rooted
* @val: check ^ 2
*
* Return: val
*/
int _sqrt(int n, int val)
{
if (val * val == n)
return (val);
if (val * val < n)
return (_sqrt(n, val + 1));
else
return (-1);
}
/**
* _sqrt_recursion - sqrt of num
* @n: number
*
* Return: -1 -> no sqrt
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
