#include "variadic_functions.h"
/**
 * print_c - prints char
 * @c: list to give
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_i - prints int
 * @i: list to give
 * Return: void
 */
void print_i(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * print_f - prints float
 * @f: list to give
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_s - prints string
 * @s: list to give
 * Return: void
 */
void print_s(va_list s)
{
	char *str;

	str = va_arg(s, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints all
 * @format: format string that says arg types
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *sep = "";
	prints funcs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (funcs[j].type)
		{
			if (format[i] == *(funcs[j].type))
			{
				printf("%s", sep);
				funcs[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
