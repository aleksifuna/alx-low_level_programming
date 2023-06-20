#include "main.h"

/**
 * _islower- checks for lowercase character.
 * @c: character to check is lower.
 *
 * Return: 1 is lowercase otherwise 0.
 */
int _islower(int c)
{

	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
