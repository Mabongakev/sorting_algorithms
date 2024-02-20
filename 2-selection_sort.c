#include "sort.h"
/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int minimum;
	size_t k, m;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		minimum = k
		for (m = k + 1; k < size; k++)

		if (array[m] < array[minimum])
		{
			minimum = m;
		}
		else
			temp = array[k];
			array[k] =  array[minimum];
			array[minimum] = temp;
			print_array(array, size);
	}
}
