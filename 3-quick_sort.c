#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @n1: The first integer to swap.
 * @n2: The second integer to swap.
 */
void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
/**
 * partion - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting index of the subset to order.
 * @high: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */

int partion(int *array, size_t size, int low, int high)
{
	int i, j;

	int *pivot = array + high;

	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < *pivot)
		{
			if (i < j)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
			i++;
		}

	}
	if (array[i] > *pivot)
	{
	swap(array + i, pivot);
	print_array(array, size);
	}


	return (i);
}
/**
 * recursion_sort - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting index of the subset to order.
 * @high: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
void recursion_sort(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
	int pivot = partion(array, size, low, high);

	recursion_sort(array, size, low, pivot - 1);
	recursion_sort(array, size, pivot + 1, high);
	}
}
/**
 * quick_sort - ddd
 * @array: ew ewe
 * @size: sasas
 */
void quick_sort(int *array, size_t size)
{
	recursion_sort(array, size, 0, size - 1);
}
