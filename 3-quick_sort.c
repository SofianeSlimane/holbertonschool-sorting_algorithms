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

	sort_main(array, 0, size - 1, size);
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
	int i, pivot = array[hi], boundary = lo, temp;

	for (i = lo; i < hi; i++)
	{
		if (array[i] <= pivot)
		{
			temp = array[i];
			array[i] = array[boundary];
			array[boundary] = temp;
			if (i != boundary)
				print_array(array, 10);
			boundary++;
		}
	}
	temp = array[boundary];
	array[boundary] = array[hi];
	array[hi] = temp;
	if (boundary != i)
		print_array(array, 10);

	return (boundary);
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
		return;
	}
	p = partition(array, lo, hi);
	sort_main(array, lo, p - 1, fixed_size);
	sort_main(array, p + 1, hi, fixed_size);
}
