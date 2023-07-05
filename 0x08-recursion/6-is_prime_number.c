/**
 * check - checks for prime numbers.
 * @a: number to be checked.
 * @i: index
 *
 * Return: 1 if prime 0 if not prime
 */
int check(int a, int i)
{
	if (i == 1)
		return (1);
	if (a % i != 0)
	{
		i = i - 1;
		return (check(a, i));
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number to be checked
 *
 * Return: 1 is prime 0 if not prime
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	i = n / 2;
	if (check(n, i))
		return (1);
	else
		return (0);
}
