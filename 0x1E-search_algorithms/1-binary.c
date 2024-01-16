#include "search_algos.h"
/**
 * binary_search - uses binary search algo to search an element in array
 * @array: pointer to first element of the array to search
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;
		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
