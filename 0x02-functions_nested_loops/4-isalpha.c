#include "main.h"
/**
 * _isalpha - checks if character is alphabet
 * @c: character to be chacked
 *
 * Return: 1 if character is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
