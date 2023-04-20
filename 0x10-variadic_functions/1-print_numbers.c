#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: seperator char
 * @n: const var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
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
