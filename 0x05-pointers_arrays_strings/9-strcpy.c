/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte, to the buffer pointed to by dest
 * @dest: pointer to dest array
 * @src: pointer to the src array
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, size;

	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	j = size;

	for (i = 0; (i < j) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for (; i < j; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
