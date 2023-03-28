#include "main.h"
#include <string.h>
/**
 * put2 - prints every other char in string starting with the first one
 * @str: pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
