#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other char of a string, starting with the first 
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
