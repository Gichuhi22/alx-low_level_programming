#include"lists.h"

/**
 * add_node_end - adds new node at the end of a list
 * @head: double pointer
 * @str: string;
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;
	}

	if (*head == NULL)
	{
		*head = temp = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
