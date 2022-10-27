#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: returns pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp)
	{
		temp = temp->next;
		count++;
		if (count == index)
			break;
		if ((temp->next == NULL) && (count != index))
			return (NULL);
	}
	return (temp);
}
