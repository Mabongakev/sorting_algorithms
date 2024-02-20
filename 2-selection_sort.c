#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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
	int *minimum;
	size_t k, m;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		minimum = array + k;
		for (m = k + 1; m < size; m++)
			minimum = (array[m] < *minimum) ? (array + m) : minimum;

		if ((array + k) != minimum)
		{
			swap_ints(array + k, minimum);
			print_array(array, size);
		}
	}
}
