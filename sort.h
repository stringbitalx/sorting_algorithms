#ifndef SORT_H
#define SORT_H
#include <stdlib.h>

/**
 * struct listint_s - doubly linked list node
 *
 * @n: int stored in node
 * @previous: pointer to previous list element
 * @next: pointer to next list element
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
#endif
