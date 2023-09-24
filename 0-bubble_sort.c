#include <stdio.h>
#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @n1: The first integer to swap.
 * @n2: The second integer to swap.
 */
void swap(int *n1, int *n2){
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
void bubble_sort(int arr[], int n)
{
	if (arr == NULL || n < 2)
		return;
	int i, j;
    	for (i = 0; i < n; i++) {
        	for(j=0;j<n-i-1;j++)
		{
            		if(arr[j]>=arr[j+1])
			{
                		swap(&arr[j], &arr[j+1]);
            		}
        	}
    	}
}
