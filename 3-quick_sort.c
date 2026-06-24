#include "sort.h"


/**
 * quick_sort - quick sort
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	else if (size == 2)
	{
		sort_two_elements(array);
		return;
	}
	sort_main(array, 0, size - 1, size);
}
/**
 * sort_two_elements - sort two elements
 * @array: array
 */
void sort_two_elements(int *array)
{
	if (array[0] > array[1])
	{
		int temp = array[0];

		array[0] = array[1];
		array[1] = temp;
	}
}

/**
 * partition - partition
 * @array: array
 * @lo: lowest index
 * @hi: highest index
 * Return: index of pivot
 */
int partition(int *array, int lo, int hi)
{
	int i, pivot = array[hi], temp_index = lo, temp;

	for (i = lo; i < hi; i++)
	{
		if (array[i] <= pivot)
		{
			temp = array[i];
			array[i] = array[temp_index];
			array[temp_index] = temp;
			temp_index++;

		}
	}
	temp = array[temp_index];
	array[temp_index] = array[hi];
	array[hi] = temp;

	return (temp_index);
}
/**
 * sort_main - main entry
 * @array: array
 * @lo: lowest index
 * @hi: highest index
 * @fixed_size: fi
 */
void sort_main(int *array, int lo, int hi, int fixed_size)
{
	int p;

	if (lo >= hi)
	{
		print_array(array, fixed_size);
		return;
	}

	p = partition(array, lo, hi);
	sort_main(array, lo, p - 1, fixed_size);
	sort_main(array, p + 1, hi, fixed_size);
}
