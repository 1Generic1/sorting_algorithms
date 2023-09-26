#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto partition scheme).
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_helper(array, 0, size - 1, size);
}

/**
 * quicksort_helper - Recursive helper function for Quick Sort
 *
 * @array: The array to be sorted
 * @low: The low index of the current partition
 * @high: The high index of the current partition
 * @size: Number of elements in @array
 */
void quicksort_helper(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quicksort_helper(array, low, pivot - 1, size);
		quicksort_helper(array, pivot + 1, high, size);
	}
}
/**
 * lomuto_partition - Lomuto partition scheme for Quick Sort
 *
 * @array: The array to be sorted
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: Number of elements in @array
 *
 * Return: The pivot index
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	if (i + 1 != high)
		print_array(array, size);
	return (i + 1);
}
