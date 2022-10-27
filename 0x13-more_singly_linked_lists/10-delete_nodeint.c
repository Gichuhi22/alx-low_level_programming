#include"lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a specified index
 * @head: pointer to first node
 * @index: index to delete
 * Return: 1 is successful -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *curr;
	unsigned int count = 0;

	temp = curr = *head;
	
	if (temp)
	{
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			temp = NULL;
		}
		while (temp)
		{
			if (count != (index))
			{
				curr = temp;
				temp = temp->next;
				count++;
			}
			else
			{
				curr->next = temp->next;
				free(temp);
				temp = NULL;
			}
				
		}
	}
	else
		return (-1);

	return(1);
}
