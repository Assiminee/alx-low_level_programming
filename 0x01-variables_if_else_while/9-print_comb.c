#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j = 10;
	int x = 44;
	int y = 32;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(y);
			putchar(x);
		}
	}

	putchar(j);

	return (0);
}
