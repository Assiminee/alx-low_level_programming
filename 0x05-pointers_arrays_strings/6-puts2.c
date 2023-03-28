#include "main.h"
#include <string.h>
/**
 * put2 - prints every other character of a string, starting with the first character
 * @str: pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
