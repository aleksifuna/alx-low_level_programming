/**
 * _memset - fills memory area with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: number of bytes.
 *
 * Return: a pointer to area s/
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
