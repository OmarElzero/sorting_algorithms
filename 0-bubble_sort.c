#include "sort.h"

/**
 * bubble_sort - function that sorts an array
 * of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: input array
 * @size: size of the array
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j;

if (array == NULL || size == 0)
return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
