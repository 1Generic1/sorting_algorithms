#include "sort.h"
#include <stdio.h>

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Cocktail shaker sort algorithm.
 *
 * @list: A pointer to a doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *left, *right;

	if (!list || !(*list) || !((*list)->next))
		return;
	do {
		swapped = 0;
		left = *list;
		right = NULL;

		while (left->next != right)
		{
			if (left->n > left->next->n)
			{
				swap_nodes(list, left, left->next);
				swapped = 1;
				print_list(*list);
			}
			else
			{
				left = left->next;
			}
		}
		if (!swapped)
			break;
		swapped = 0;
		right = left;
		left = left->prev;

		while (right->prev != left)
		{
			if (right->n < right->prev->n)
			{
				swap_nodes(list, right->prev, right);
				swapped = 1;
				print_list(*list);
			}
			else
			{
				right = right->prev;
			}
		}
	} while (swapped);
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 *
 * @list: A pointer to the list
 * @node1: First node to swap
 * @node2: Second node to swap
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (!node1 || !node2)
		return;
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;
	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}
