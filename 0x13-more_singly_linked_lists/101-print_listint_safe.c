#include "lists.h"
/**
 * countNodesonce - counts the number of unique nodes in a looped list
 * @head: pointer to first node
 * Return: number of unique nodes
 */

size_t countNodesonce(const listint_t *head)
{
	const listint_t *slow_p, *fast_p;
	size_t count = 1;

	slow_p = head->next;
	fast_p = head->next->next;

	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				count++;
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			slow_p = slow_p->next;
			while (slow_p != fast_p)
			{
				count++;
				slow_p = slow_p->next;
			}
			return (count);
		}
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - a function that prints a list
 * @head: pointer to first node
 * Return: returns the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int count = countNodesonce(head);
	int n = 0;

	if (head)
	{
		if (count == 0)
		{
			while (head)
			{
				count++;
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
		}
		else
		{
			while (n < count)
			{
				n++;
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
		}
	}
	else
		exit(98);

	return (count);
}
