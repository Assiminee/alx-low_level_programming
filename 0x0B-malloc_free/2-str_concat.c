#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen_recursion(char *s);
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size;
	int s2_size;
	int i;
	int j;
	char *cat;

	j = 0;
	s1_size = _strlen_recursion(s1);
	s2_size = _strlen_recursion(s2);
	cat = malloc(s1_size + s2_size);

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < s1_size + s2_size; i++)
	{
		if (i < s1_size)
		{
			cat[i] = s1[i];
		}
		else
		{
			cat[i] = s2[j];
			j++;
		}
	}
	cat[i] = '\0';
	return (cat);
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
