#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int i, j, smallest_indx;

	for (i = 0; i < n; i++)
	{
	smallest_indx = i;
	for (j = i + 1; j < n; j++)
	{
		if (arr[j] < arr[smallest_indx])
			smallest_indx = j;
	}
	swap(&arr[i], &arr[smallest_indx]);
	print_array(arr, n);
	}
}
