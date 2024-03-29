#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first element of the list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
