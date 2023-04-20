#include "variadic_functions.h"
/**
 * sum_them_all - sum all args
 * @n: integers to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	s = 0;
	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
