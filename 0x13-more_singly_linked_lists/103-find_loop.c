#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in a listint_t linked list
 * @head: a pointer to the head of the listint_t list
 *
 * Return: if there is no loop - NULL or
 * the address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head, *fast_p = head;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			return (slow_p);
		}
	}
return (NULL);
}
