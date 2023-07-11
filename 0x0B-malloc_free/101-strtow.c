#include <string.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: string to be split
 *
 * Return: pointer to split strings.
 */
char **strtow(char *str)
{
	int len, count, i, j;
	char *strcop, *strcop2, *token, **arr;

	if (str == NULL)
		return (NULL);
	strcop = strdup(str);
	strcop2 = strdup(str);
	len = 0;
	count = 0;
	i = 0;
	token = strtok(strcop, " ");
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}
	arr = malloc((count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	token = strtok(strcop2, " ");
	while (token != NULL)
	{
		len = strlen(token);
		arr[i] = malloc((len + 1) * sizeof(char));
		for (j = 0; j < len; j++)
			arr[i][j] = token[j];
		arr[i][j] = '\0';
		token = strtok(NULL, " ");
		i++;
	}
	arr[i] = NULL;
	free(strcop);
	return (arr);
}
