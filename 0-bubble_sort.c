#include <stdio.h>
#include "sort.h"

/***
 * function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * Geeks4geeks insp
 */void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t swap;
	size_t temp;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
				print_array(array, size);
			}

		}
		if (swap == 0)
			break;
	}
}
