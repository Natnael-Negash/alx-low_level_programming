#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - print the sum of all the data of listint_t linked list
 * @head: a pointer to the head o the listint_t list.
 *
 * Return: if the list is empty - 0. otherwise the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
