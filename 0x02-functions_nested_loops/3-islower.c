#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: character to be checked
 *
 * return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
