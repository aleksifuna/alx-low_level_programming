/**
 * _isalpha - checks for aphabetic character.
 * @c: character to check.
 *
 * Return: 1 if alphabet.
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
