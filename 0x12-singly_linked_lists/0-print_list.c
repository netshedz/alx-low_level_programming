#include "lists.h"

/**
 * print_list - prints the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the lists.
 */
size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			h = h->next;
		nelem++;
	}
	return (nelem);

}
