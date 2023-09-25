#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                       using the Insertion sort algorithm.
 *
 * @list: Pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev;
	listint_t *next;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		next = current->next;
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			prev = prev->prev;
		}
		if (prev)
		{
			current->prev->next = next;
			if (next)
				next->prev = current->prev;
			current->prev = prev;
			current->next = prev->next;
			if (prev->next)
				prev->next->prev = current;
			prev->next = current;
		}
		else
		{
			current->next = (*list);
			current->prev = NULL;
			(*list)->prev = current;
			(*list) = current;
		}
		print_list(*list);
		current = next;
	}
}
