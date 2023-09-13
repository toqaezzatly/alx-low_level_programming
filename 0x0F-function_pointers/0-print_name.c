#include <stdio.h>
#include "function_pointers.h"
/**
 * print_using_printf - not needed
 * @name: to be printed
 *
 * Return: void
*/
void print_using_printf(char *name)
{
	printf("%s\n", name);
}
/**
 * print_name - clear
 * @name: name to be printed
 * @f: fn pointer
 *
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name); /*note f takes name*/
}
