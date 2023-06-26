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
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}
