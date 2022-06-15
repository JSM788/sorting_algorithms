#include "sort.h"

/**
 * selection_sort - function that sorts
 * @array: pointer
 * @size: size of the function
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, flag;

	for (i = 0; i < size; i++)
	{
		flag = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[flag] > array[j])
				flag = j;
		}

		if (flag != i)
		{
			tmp = array[flag];
			array[flag] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
