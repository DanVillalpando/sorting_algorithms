#include <stdio.h>
#include "sort.h"
/***
 * function that sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 */void insertion_sort_list(listint_t **list)
{
	listint_t *swap, *key;
	listint_t *temp;
	key = *list;
	if (!list || !*list)
		return;
	while ((key = key->next))
	{
		swap = key;
		while (swap->prev && swap->n < swap->prev->n)
		{
			temp = swap->prev;
			if (swap->next)
				swap->next->prev = temp;
			if (temp->prev)
				temp->prev->next = swap;
			else
				*list = swap;

			temp->next = swap->next;
			swap->prev = temp->prev;
			swap->next = temp;
			temp->prev = swap;
			print_list(*list);
		}
	}
}
