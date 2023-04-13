#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatenated
 * @s2: string to be concatenated with s1 up to n bytes
 * @n: first n bytes of s2
 *
 * Return: newly allocated space in memory containing s1
 * followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	int j;
	unsigned int mem_al;

	if (n >= strlen(s2))
		mem_al = strlen(s1) + strlen(s2) + 1;
	else
		mem_al = strlen(s1) + n + 1;

	ptr = malloc(mem_al);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	j = 0;
	for (i = 0; i < mem_al; i++)
	{
		if (i < strlen(s1))
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	return (ptr);
}
