/**
 * reverse_array - reverses the contents of an integer array
 * @a: integer array to be reversed.
 * @n: number of elements in array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
