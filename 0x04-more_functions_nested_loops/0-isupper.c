#include "main.h"
/**
 * _isupper - checks if character is 
 * uppercase or not
 * @c: character to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
