#include "main.h"
/**
 * positive_or_negative - prints if int is positive or negative
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is Zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else 
		printf("%d is positive\n", i);
}
