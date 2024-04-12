#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 */


void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	i = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
	while (i < size - 1)
	{
		if (array[i + 1] != '\0' && array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
		}
		i++;
		}
	j++;
	}
}
