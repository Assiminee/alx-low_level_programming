#include "main.h"
/**
 * _isalpha - checks if character is alphabet
 * @c: character to be chacked
 *
 * return: 1 if alpha, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
