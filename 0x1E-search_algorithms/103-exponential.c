#include "search_algos.h"

/**
 * _binary_search - Performs binary search on a subarray.
 * @array: Pointer to the first element of the array to search.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found or
 *         if the array is NULL.
 *
 * Description: Prints the subarray being searched after each change.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                      using exponential search.
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found or
 *         if the array is NULL.
 *
 * Description: Prints each value checked and the subarray range found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i *= 2;
		}
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
