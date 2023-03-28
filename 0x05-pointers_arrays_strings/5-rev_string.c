#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: pointer to char
 *
 * Return: void
 */
void rev_string(char *s)
{
	unsigned long int i;
	unsigned long int j;
	char tmp;

	j = strlen(s) - 1;

	for (i = 0; i < strlen(s) / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}
}

