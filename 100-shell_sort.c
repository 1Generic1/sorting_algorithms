#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using the Shell sort algorithm with the Knuth sequence.
 *
 * @array: The array of integers to be sorted
 * @size: The number of elements in the array
 */
void shell_sort(int *array, size_t size)
{
	int interval, i, j, temp;

	if (!array || size < 2)
		return;
	interval = 1;
	while (interval <= (int)size / 3)
		interval = interval * 3 + 1;
	while (interval > 0)
	{
		for (i = interval; i < (int)size; i++)
		{
			temp = array[i];
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
		print_array(array, size);
		interval = (interval - 1) / 3;
	}
}
