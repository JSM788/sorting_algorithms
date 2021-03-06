#include "sort.h"

/**
 * partition - check the code
 * @array: pointer
 * @low: integer
 * @high: integer
 * @size: size type
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot_part;
	int temp;
	int i, j;

	pivot_part = array[high];

	j = low - 1;

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot_part)
		{
			j++;
			if (j != i)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
	j++;
	if (j != i)
	{
		temp = array[j];
		array[j] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (j);
}

void quicksort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	/*quicksort(array, array[0], array[size - 1]);*/
	quicksort(array, 0, size - 1, size);
}
