#include "main.h"
/**
 * pwr - get exponential of a number
 * @num: the exponential
 *
 * Return: exponential of the number
 */
unsigned int pwr(unsigned int num)
{
	unsigned int results;

	results = 1;
	while (num > 0)
	{
		results *= 2;
		num--;
	}
	return (results);
}
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: string of 1 and 0 to be converted
 *
 * Return: the converted number or 0 if wrong input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, idx, exp;

	exp = strlen(b) - 1;
	idx = 0;
	dec = 0;
	if (b == NULL)
	{
		dec = 0;
		return (dec);
	}
	while (b[idx] != '\0')
	{
		if (b[idx] != '1' && b[idx] != '0')
		{
			dec = 0;
			break;
		}
		dec += (b[idx] - '0') * pwr(exp);
		idx++;
		exp--;
	}
	return (dec);
}
