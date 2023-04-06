#include "main.h"

int _strlen_recursion(char *s);
int aid(char *s, int i);
/**
 * is_palindrome - returns if string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (aid(s, 1));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to char
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
        if (*s)
        {
                return (1 + _strlen_recursion(++s));
        }
        return (0);
}
/**
 * aid - helps find if a string is a palindrome
 * @s: string to check
 * @i: int
 *
 * Return: int
 */
int aid(char *s, int i)
{
	if (*s)
	{
		if (*s != s[_strlen_recursion(s) - i])
		{
			return (0);
		}
		else
		{
			return (aid(s + 1, i + 1));
		}
	}
	return (1);
}
