#include "main.h"
/**
 * sqrt - helper function
 * @n: number to be square rooted
 * @val: check ^ 2
 *
 * Return: val
*/
int sqrt(int n, int val)
{
        if (val * val == n)
                return (val);
        if (val * val < n)
                return (sqrt(n, val + 1));
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
        return (sqrt(n, 1));
}
