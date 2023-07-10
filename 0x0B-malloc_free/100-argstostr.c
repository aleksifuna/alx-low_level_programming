#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatinates arguments to string.
 * @ac: arguments count
 * @av: pointer to arguments.
 *
 * Return: concatinated string.
 */
char *argstostr(int ac, char **av)
{
	unsigned int j, k, len;
	int i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 1;
	for (i = 0; i < ac; i++)
		len = len + strlen(av[i]) + 1;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (strlen(av[i])); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
