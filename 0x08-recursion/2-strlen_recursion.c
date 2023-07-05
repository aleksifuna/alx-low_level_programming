#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string to count the length.
 *
 * Return: Length of string.
 */
int _strlen_recursion(char *s)
{
	int l;

	if (*s == '\0')
		return (0);
	l = 1 + _strlen_recursion(s + 1);
	return (l);
}
