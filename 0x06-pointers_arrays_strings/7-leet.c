/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;

	char *l_char = "aeotl";
	char *l_num = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l_char[j] != '\0'; j++)
		{
			if (str[i] == l_char[j] || str[i] == l_char[j] - 32)
				str[i] = l_num[j];
		}
	}
	return (str);
}
