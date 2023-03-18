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

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
