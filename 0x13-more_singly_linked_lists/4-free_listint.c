#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: This pointd to the head of the listint_t
 * list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
