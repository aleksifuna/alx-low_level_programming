#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of all arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	unsigned int i;
	char *strn, *sep;
	va_list ap;

	va_start(ap, format);

	i = 0;
	sep = "";
	if (format)
	{

		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				strn = va_arg(ap, char *);
				if (!strn)
					printf("%s(nil)", sep);
				else
					printf("%s%s", sep, strn);
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
		printf("\n");
		va_end(ap);
	}
}
