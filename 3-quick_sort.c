#include "sort.h"

/***
 * swap two numbers
 **/void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/***
 * function that takes last element as pivot-
 * split array around pivot
 * @low: first element
 * @high: last element
 */int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			swap(&arr[i], &arr[j]);
			if (i != j)
				print_array(arr, size);
			i++;
		}
	}
	swap(&arr[i], &arr[high]);
	if (i != j)
		print_array(arr, size);
	return (i);
}

/***
 * function that implements QuickSort
 */void quickSort(int *arr, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(arr, low, high, size);
		quickSort(arr, low, pivot - 1, size);
		quickSort(arr, pivot + 1, high, size);
	}
}

/***
 * Qick sort
 */void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
