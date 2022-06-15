#include "sort.h"

/**
 *  bubble_sort - check the code
 *  @array: pointer
 *  @size: the size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
