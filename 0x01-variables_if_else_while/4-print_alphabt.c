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

	for (i = 97; i <=122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}

	putchar(j);

	return (0);
}
