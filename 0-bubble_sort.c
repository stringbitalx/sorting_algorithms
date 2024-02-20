#include "sort.h"

/**
 * buble_sort - sorts int arrays in ascending order
 * array: array to sort
 * size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int sve = 0;
	size_t a, b;

	if (size < 2 || array == NULL)
		return;
	for (b = size; b > 0; b--)
	{
		for (a = 0; a < size - 1; a++)
		{
			if (array[a + 1] < array[a])
			{
				sve = array[a];
				array[a] = array[a + 1];
				array[a + 1] = sve;
				print_array(array, size);
			}
		}
	}
}
