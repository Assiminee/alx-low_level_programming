#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *copy_str(char *s1, unsigned int n);
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

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	if (s1 == NULL)
	{
		if (n >= strlen(s2))
		{
			ptr = copy_str(s2, strlen(s2));
		}
		else
		{
			ptr = copy_str(s2, n);
		}
		return (ptr);
	}
	if (s2 == NULL)
        {
	       	ptr = copy_str(s1, strlen(s1));
		return (ptr);
        }

	if (n >= strlen(s2))
		mem_al = strlen(s1) + strlen(s2) + 1;
	else
		mem_al = strlen(s1) + n + 1;

	ptr = malloc(mem_al);

	if (ptr == NULL)
		return (NULL);

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
	ptr[i] = '\0';
	return (ptr);
}
/*
 * copy_str - copies string
 * @s1: string to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to the copied string
 */
char *copy_str(char *s1, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(n + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = s1[i];
	ptr[i] = '\0';

        return (ptr);
}
