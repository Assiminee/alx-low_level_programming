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
	int number_of_char;
	int i;

	number_of_char = strlen(str);

	if (number_of_char % 2 != 0)
		number_of_char = (number_of_char - 1) / 2 + 1;
	else
		number_of_char /= 2;

	for (i = number_of_char; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
