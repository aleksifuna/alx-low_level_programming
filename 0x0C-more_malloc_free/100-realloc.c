#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to prev allocated memory
 * @old_size: allocated space for ptr
 * @new_size: size of new memory block
 *
 * Return: pointer to newly created block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		else
			return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	strcpy(arr, ptr);
	free(ptr);
	return (arr);
}
