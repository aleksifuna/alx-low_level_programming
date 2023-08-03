/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if big else 0
 */
int get_endianness(void)
{
	unsigned int num;
	char *ptr;

	num = 1;
	ptr = (char *)&num;
	if (*ptr == 1)
		return (1);
	else
		return (0);
}
