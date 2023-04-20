#include "variadic_functions.h"
/**
 * sum_them_all - does the sum of n parameters
 * @n: number of parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;

	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);
	s = 0;
	for (i = 0; i < n; i++)
	{
		int x = va_arg (args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
