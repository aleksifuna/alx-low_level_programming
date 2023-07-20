#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of all arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i= 0;
	char *strn, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{

		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
				strn = va_arg(list, char *);
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
	}
	printf("\n");
	va_end(list);
}
