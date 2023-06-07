#include "lists.h"

/**
 * free_listint - frees a linnked list
 * @head: listint_t list to beee freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
