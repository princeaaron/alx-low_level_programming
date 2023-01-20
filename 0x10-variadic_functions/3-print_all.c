

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_all - A function prints anything.
* @format: A list of type of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
	va_list vlst;
	char *temp;
	int x = 0;
	
	va_start(vlst, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", (char) va_arg(vlst, int));
				break;
			case 'x':
				printf("%d", va_arg(vlst, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(vlst, double));
				break;
			case 's':
				temp = va_arg(vlst, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[x] == 'c' || format[x] == 'x' || format[i] == 'f' ||
		     format[x] == 's') && format[(x + 1)] != '\0')
			printf(", ");x++;
	}
	va_end(vlst);
printf("\n");
}
