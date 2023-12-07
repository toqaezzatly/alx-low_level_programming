#include "lists.h"
/**
 * add_nodeint_end - adds a node to the bottom
 * @head: pointer to first node
 * @n: value for the new node
 *
 * Return: pointer to newnode
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	if (!*head)
		*head = newnode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newnode;
	}
	return (newnode);
}
