/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: difference in two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i, acomp;

	acomp = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			acomp = s1[i] - s2[i];
			break;
		}
	}
	return (acomp);
}
