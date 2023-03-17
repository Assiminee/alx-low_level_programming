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

	for (i = 48; i <= 57; i++)
		putchar(i);

	for (i = 97; i <= 102; i++)
		putchar(i);

	putchar(j);

	return (0);
}
