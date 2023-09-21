#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list - node
 * @str: value to be stored
 * @len_: string length
 * @next: pointer to next node
*/
typedef struct list
{
	char *str;
	int len_;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **h, const char *str);
list_t *add_node_end(list_t **h, const char *str);
void free_list(list_t *h);

#endif /*_LISTS_H*/
