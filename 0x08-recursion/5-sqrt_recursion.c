/**
 * sqt - returns the natural square root.
 * @n: number to find square root.
 * @i: index odd number
 *
 * Return: Square root
 */
int sqt(int n, int i)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-3000);
	}
	else
	{
		n = n - i;
		i = i + 2;
		return (1 + sqt(n, i));
	}
}

/**
 * _sqrt_recursion - returns the natual square root of a number
 * @n: number
 *
 * Return: Square root or -1 if no square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (sqt(n, 1) < 0)
		return (-1);
	else
		return (sqt(n, 1));
}
