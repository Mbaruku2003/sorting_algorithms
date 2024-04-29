#include <stdio.h>
#include "sort.h"
/**
 * swap - swaps integers
 * @a: the integer
 * @b: the integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - way to partition
 * @array: the array
 * @low: index of smaller element
 * @high: the last element
 * Return: return the arrangement
 */
int lomuto_partition(int *array, int low, int high)
{
	int pivot, i;
	int j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return i + 1;
}
/**
 * quick_sort - implementation of quick sort
 * @low: the lowest
 * @high: the highest
 */
void quick_sort(int *array, int low, int high)
{
	int partition_index;
	int k;

	if (low < high)
	{
		partition_index = lomuto_partition(array, low, high);
		for (k = low; k <= high; k++)
		{
			printf("%d ", array[k]);
		}
		printf("\n");
		quick_sort(array, low, partition_index - 1);
		quick_sort(array, partition_index + 1, high);
	}
}

