#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - uses bubble sort to sort
 * @array: the array
 * @size: location of the integer in array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t flag;
	size_t temp;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
