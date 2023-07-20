#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
/**
 * print_sep - prints separator between string
 * @i: index
 * @str: string
 */
void print_sep(unsigned int i, const char *const str)
{
	if (i < strlen(str) - 1)
		printf(", ");
}
/**
 * print_all - prints anything
 * @format: list of all arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	unsigned int i;
	char *strn;
	va_list ap;

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'i':
			printf("%i", va_arg(ap, int));
			print_sep(i, format);
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			print_sep(i, format);
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			print_sep(i, format);
			break;
		case 's':
			strn = va_arg(ap, char *);
			if (strn == NULL)
				printf("(nil)");
			else
				printf("%s", strn);
			break;
		default:
			break;
		}
		i++;
	}
	printf("\n");
}
