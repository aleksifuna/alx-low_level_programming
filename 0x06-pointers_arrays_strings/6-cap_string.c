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
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' || str[i - 1] == '\t' ||str[i] == '\n'
				|| str[i] == ',' || str[i] == ';'||
				str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}' ||
				i == 0)
			str[i] -= 32;
	}
	return (str);
}
				
