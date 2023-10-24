#include <stdio.h>
#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: a pointer to the address of the head of the listint_t list.
 *
 * Return: if the linked list is empty - 0 or the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
