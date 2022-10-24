#include"lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the first element
 * @str: string data stored in element
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);
	new_list->len = strlen(str);
	new_list->str = strdup(str);
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
