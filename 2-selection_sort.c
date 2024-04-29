#include <stdio.h>
#include "sort.h"
/**
 * swap - swaps integer in an array
 * @a: the value at a certain array pos
 * @b:value at another array position
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - uses selectin sorting
 * @array: array with elements
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t min_index;
	size_t k;
	size_t j;

	for (i = 0; i < size - 1; ++i)
	{
		min_index = i;
		for (j = i + 1; j < size; ++j)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		swap(&array[i], &array[min_index]);
		for (k = 0; k < size; ++k)
		{
			print_array(array, size);
		}
		printf("\n");
	}
}
