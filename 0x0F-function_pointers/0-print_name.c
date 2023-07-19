/**
 * print_name - prints a string
 * @name: string to print
 * @f: print function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
