#include "main.h"
/**
 * pal_helper - helper function
 * @s: pointer
 * @start: beginning
 * @end: end
 *
 * Return: 1 if palindronme 0 if not
*/
int pal_helper(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (s[start] == s[end])
		return (pal_helper(s, start + 1, end - 1));
	else
		return (0);
}
/**
 *  is_palindrome - checks palindrome
 * @s: pointer
 *
 * Return: 1 -> pal 0 -> not
*/
int is_palindrome(char *s)
{
	return (pal_helper(s, 0, strlen(s) - 1));
}
