#include <string.h>
#include <stddef.h>
/**
 * check - checks if a number is a palindrome.
 * @str: string to check.
 * @left: left index
 * @right: right index
 *
 * Return: 1 is palindrome else 0.
 */
int check(char *str, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (str[left] == str[right])
		return (check(str, left + 1, right - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if a number is a palindrome
 * @s: string to be checked.
 *
 * Return: 1 if palindrome else 0.
 */
int is_palindrome(char *s)
{
	int lind, rind;

	lind = 0;
	rind = strlen(s) - 1;
	if (check(s, lind, rind))
		return (1);
	else
		return (0);
}
