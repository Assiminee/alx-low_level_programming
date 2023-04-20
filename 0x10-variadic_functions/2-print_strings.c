#include "variadic_functions.h"
/**
 * print_strings - prints a string
 * @separator: seperator char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char*);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (separator == NULL)
		{
			continue;
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
