#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n)
 * @head: first node in the linked list
 *
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
