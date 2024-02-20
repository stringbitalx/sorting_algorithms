#include "sort.h"

/**
 * insertion_sort_list - sorts using insetion algorithm
 *
 * @list: linked list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	int sve = 0;

	if (!list)
		return;
	temp = *list;
	while (temp->next)
	{
		if (temp->n > temp->next->n)
		{
			sve = temp->n;
			*(int *)&temp->n = temp->next->n;
			*(int *)&temp->next->n = sve;
			temp = *list;
			print_list(*list);
		}
		else
			temp = temp->next;
	}
}
