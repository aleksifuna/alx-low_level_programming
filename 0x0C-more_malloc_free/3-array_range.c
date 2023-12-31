#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min range value.
 * @max: max range value.
 *
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max + 1 - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;
	return (arr);
}
