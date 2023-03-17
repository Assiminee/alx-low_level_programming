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

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar(j);

	return (0);
}
