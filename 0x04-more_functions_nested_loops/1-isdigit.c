/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to be checked.
 *
 * Return: 1 if digit else 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
