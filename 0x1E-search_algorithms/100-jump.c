#include "search_algos.h"
/**
 * jump_search - uses jump search algo to search for an element in a list
 * @array: pointer to first element of the array to search in
 * @size: the number of elements in the array
 * @value: value to search for
 *
 * Return: index where element is found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jumps, block, prev, i;

	jumps = sqrt(size);
	block = 0;
	if (array == NULL)
		return (-1);
	while (array[block] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", block, array[block]);
		prev = block;
		block += jumps;
		if (block > size - 1)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, block);
	for (i = prev; i <= block; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
