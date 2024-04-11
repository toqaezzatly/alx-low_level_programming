#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* update_existing_key - Updates the value of an existing key in the hash table
* @temp: Pointer to the node containing the key to be updated
* @value: The new value to set for the key
* Return: 1 if succeeded, 0 otherwise
*/
static int update_existing_key(hash_node_t *temp, const char *value)
{
free(temp->value);
temp->value = strdup(value);
return ((temp->value != NULL) ? 1 : 0);
}

/**
* add_new_key - Adds a new key-value pair to the hash table
* @ht: The hash table to add the new key-value pair to
* @index: The index in the hash table array to add the new node
* @key: The key to add
* @value: The value associated with the key
* Return: 1 if succeeded, 0 otherwise
*/
static int add_new_key(hash_table_t *ht, unsigned long int index,
const char *key, const char *value)
{
hash_node_t *new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}

/* Add new node to the beginning of the list at index */
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}

/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table to add or update the key/value to
* @key: The key
* @value: The value associated with the key
* Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *temp;

if (ht == NULL || key == NULL || *key == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);

/* Check if key already exists, if so, update its value */
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
return (update_existing_key(temp, value));
temp = temp->next;
}

return (add_new_key(ht, index, key, value));
}

