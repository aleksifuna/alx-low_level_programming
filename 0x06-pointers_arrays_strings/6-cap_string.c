/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i]
				== '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] ==
				 ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			if (str[i] == '\t')
			{
				str[i] = ' ';
			}
		}
	}
	return (str);
}
