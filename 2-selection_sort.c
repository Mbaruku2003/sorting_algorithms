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
	size_t j;
	size_t min_index;

	if (size == 0 || array == NULL)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
