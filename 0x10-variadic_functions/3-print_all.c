#include "variadic_functions.h"
/**
 * print_c - prints char
 * @a: list to give
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *types = "cifs";
	char *str;
	int i;
	int j;
	int checker;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		checker = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				checker = 1;
				break;
			}
			j++;
		}
		if (!checker)
		{
			i++;
			continue;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				break;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
