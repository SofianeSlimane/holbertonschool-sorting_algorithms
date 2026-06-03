#include "sort.h"
/**
 * selection_sort - selection sort
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
		size_t i, j;
		int temp, smallest, smallest_index, swap = 0;

		if (array == NULL || size < 2)
			return;

		for (i = 0; i < size - 1; i++)
		{
			smallest = array[i];
			for (j = i + 1; j < size; j++)
			{
				if (smallest > array[j])
				{
					smallest = array[j];
					smallest_index = j;
					swap = 1;
				}
			}
		if (swap)
		{
			temp = array[i];
			array[i] = smallest;
			array[smallest_index] = temp;
			print_array(array, size);
		}
		swap = 0;
		}
}
