#include <stdio.h>
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
 * bubble_sort - Sort an array of integers in ascending order.
 * @arr: An array of integers to sort.
 * @n: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] >= array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
		print_array(array, size);
            }
        }
    }
}
