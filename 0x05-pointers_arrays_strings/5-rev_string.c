/**
 * rev_string - function that reverses a string
 * @s: ctring to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j, length;
	char temp;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
