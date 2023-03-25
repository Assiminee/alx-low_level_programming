#include "main.h"
/**
 * print_times_table - prints n times table starting with 0
 * @n: int
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (i * j <= 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				if (i * j > 9)
				{
					if (i * j > 99)
					{
						_putchar((i * j) / 100 + '0');
						_putchar(((i * j) / 10) % 10 + '0');
					}
					else
					{
						_putchar(' ');
						_putchar((i * j) / 10 + '0');
					}
				}
				_putchar((i*j)%10 + '0');
			}
			_putchar('\n');
		}
	}
}
