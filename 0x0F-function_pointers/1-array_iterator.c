#include <stddef.h>
/**
 * array_iterator - iterates an array
 * @array: array to iterate
 * @size: size of array
 * @action: action to be done on array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
