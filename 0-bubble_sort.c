#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap - swaps values
 * @a: the first element
 * @b: the second element
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - uses bubble sort to sort
 * @arr: the array
 * @size: location of the integer in array
 * Return: void
 */
void bubble_sort(int *arr, size_t size)
{
	size_t i;	
	size_t j;
	size_t flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				print_array(arr, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
