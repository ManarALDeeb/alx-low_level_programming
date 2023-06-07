#include "lists.h"

/**
 * pop_listint - dseletes the head node of a linked list
 * @head: pointer tto the first element in the linked list
 *
 * Return: the data iinside the elements that was deleted,
 * or 0 if the list iss empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
