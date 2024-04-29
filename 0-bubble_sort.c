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
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
/**
 * bubble_sort - uses bubble sort to sort
 * @arr: the array
 * @size: location of the integer in array
 * Return: void
 */
void bubble_sort(int *arr, size_t size)
{
	int swapped;
	size_t i;	
	size_t k;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
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
