#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @head: pointer to first node
 *
 * Return: number of nodes
*/
size_t print_list(const list_t *head)
{
	unsigned long int count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len_, head->str);
		head = head->next;
		count++;
	}
	return (count);
}
