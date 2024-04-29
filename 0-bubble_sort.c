#include <stdio.h>
#include "sort.h"
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
	size_t temp;
	if (arr == NULL || size == 0)
	{
		return
	}
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
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
