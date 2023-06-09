#include "lists.h"

/**
 * free_list - free all list
 * @head: 1 mem
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
