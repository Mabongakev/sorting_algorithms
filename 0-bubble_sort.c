#include "sort.h"
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Return: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t k, m;
	int temp = 0;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size; k++)
	{
		for (m = 0; m < size - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				temp = array[m];
				array[m] = array[m + 1];
				array[m + 1] =temp;
				print_array(array, size);
			}
		}
	}
}	
