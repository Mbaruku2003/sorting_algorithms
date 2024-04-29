#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap - swaps integers
 * @arr: the array to be used
 * @i: the first element
 * @j: the second element
 * Return: void
 */
void swap(int *arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
/**
 * bubblesort - uses bubble sort to sort
 * @arr: the array
 * @n: location of the integer in array
 * Return: void
 */
void bubble_sort(int *arr, size_t size)
{
	int swapped = 0;
	size_t i;
	size_t j;
	size_t k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1);
				swapped = 1;
			}
		}
		if (!swapped)
		{
			break;
		}
		for (k = 0; k < size; k++)
		{
			printf("%d ", arr[k]);
		}
		printf("\n");
	}
}
