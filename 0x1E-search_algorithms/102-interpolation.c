#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the found item else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (value >= array[low] && value <= array[high] && high > low)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
