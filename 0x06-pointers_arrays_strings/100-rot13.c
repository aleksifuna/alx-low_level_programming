/**
 * rot13 - encodes a string using rot13
 * @str: string
 *
 * Return: encoded string.
 */
char *rot13(char *str)
{
	int i, j;

	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] ="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; j < 52; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
