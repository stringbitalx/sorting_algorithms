#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - prints an integer array
 *
 * @array: array to be used
 * @size: array size
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && a < size)
	{
		if (i > 0)
			printf(",");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}
