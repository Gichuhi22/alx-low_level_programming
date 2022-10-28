#include "lists.h"

/**
 * find_listint_loop - finds a loop in a list
 * @head: pointer to starting node
 * Return: returns address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (slow);
		}
		else
			return (NULL);
	}
}
