#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: returns pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *pos;
	unsigned int count = 0;

	temp = pos = head;
	if (temp)
	{
		while (temp)
		{
			if (count != index)
			{
			temp = temp->next;
			count++;
			}
			else
			{
				break;
			}
		}
	}
	else
		return (NULL);

	return (temp);
}
