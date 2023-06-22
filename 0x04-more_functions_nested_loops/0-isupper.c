/**
 * _isupper - checks for uppercase character.
 * @c: character to check.
 *
 * Return: 1 is uppercase else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
