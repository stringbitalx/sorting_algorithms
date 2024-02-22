#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 *
 * @array: array of integers
 * @size:array's size
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, c;
	int temp;

	for (a = 0; a < size; a++)
	{
		c = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[c])
				c = b;
		}
		if (c != a)
		{
			temp = array[a];
			array[a] = array[c];
			array[c] = temp;
			print_array(array, size);
		}
	}
}
