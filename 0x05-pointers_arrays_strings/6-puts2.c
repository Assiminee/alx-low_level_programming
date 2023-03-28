#include "main.h"
/**
 * put2 - prints every other char in string starting with the first one
 * @str: pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
