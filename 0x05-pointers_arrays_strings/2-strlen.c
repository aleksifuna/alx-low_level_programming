/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string variable
 *
 * Return: string length.
 */
int _strlen(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}
