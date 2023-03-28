#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: pointer to char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str);

	if (len % 2 != 0)
		len = (len - 1) / 2;
	else
		len /= 2;

	for (i = len; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
