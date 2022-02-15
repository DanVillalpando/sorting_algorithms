#include <stdio.h>
#include "sort.h"

/***
 * swap two numbers
 **/void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/***
 * implementation of selection sort
 * min_el: minimum element
 **/void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_el;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_el = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_el] > array[j])
				min_el = j;
		}
		if (min_el != i)
		{
			swap(&array[i], &array[min_el]);
			print_array(array, size);
		}
	}
}
