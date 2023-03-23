#include "main.h"
/**
 * _idigit - checks if digit
 * @c: character to check
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if ('0' <= c && '9' >= c)
	{
		return (1);
	}
	return (0);
}
