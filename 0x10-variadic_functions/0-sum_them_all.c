#include <stdarg.h>
/**
 * sum_them_all - sums all the arguments passed.
 * @n: number of arguments to be passed.
 *
 * Return: sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
