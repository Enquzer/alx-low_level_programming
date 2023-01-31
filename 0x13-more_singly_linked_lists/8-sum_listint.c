#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data of a linked list
 * @head: head
 * Return: null
 */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
