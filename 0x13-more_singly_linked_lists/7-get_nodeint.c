#include "lists.h"

/**
 * get_nodeint_at_index - function that finds a given
 * node in a linked list
 * @head: pointer to thehead of thr linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the desired node or (NULL) if the node
 * does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
			head = head->next;
	}

	return (head);
}
