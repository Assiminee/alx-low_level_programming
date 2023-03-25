#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (i * j <= 9)
				{
					_putchar(' ');
				}
			}
			if (i * j > 9)
			{
				_putchar((i * j) / 10 + '0');
			}
			_putchar((i * j) % 10 + '0');
		}
		_putchar('\n');
	}
}

