#include "lists.h"
/**
 * add_nodeint - adds node to the top
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
	{
		return (NULL);
	}
	newnode->next = NULL;
	newnode->n = n;
	if (*head)
		newnode->next = *head;
	*head = newnode;
	return (newnode);
}
