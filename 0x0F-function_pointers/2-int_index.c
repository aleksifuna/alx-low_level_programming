#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: array of integers to search
 * @size: number of elements in the array
 * @cmp: function that compares compares with our search
 *
 * Return: index of first element matching out criteria or otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{\
	int i;

	if (array == NULL || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
