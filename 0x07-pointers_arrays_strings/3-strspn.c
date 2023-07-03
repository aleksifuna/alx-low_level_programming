/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check.
 * @accept: character to match.
 *
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	unsigned int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
