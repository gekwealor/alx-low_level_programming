#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list list_t
 * @str: need to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

if (str == NULL)
{

return (NULL);
}

list_t *new_mode = malloc(sizeof(list_t));

if (!new)
return (NULL);

new_node->str = strdup(str);
new_node->next = *head;
(*head) = new;

return (*head);
}
