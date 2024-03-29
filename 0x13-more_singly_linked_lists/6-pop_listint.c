#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list and returns their data
 * @head: head
 * Return: nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
