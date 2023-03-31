#include "main.h"
#include <stdlib.h>
/**
 * infinite_add - adds every digit from n1 and n2 and stores the result in a buffer
 * @n1: string containing numbers to be added
 * @n2: string containing numbers to be added
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int len;
	char *ptr;
	char tmp[2];
	char tmp2[2];

	ptr = n1;
	len = 0;

	while (*ptr)
	{
		len++;
		ptr++;
	}

	if (len < size_r)
	{
		for (i = 0; n1[i]; i++)
		{
			tmp[0] = n1[i];
			tmp2[0] = n2[i];
			r[i] = atoi(tmp) + atoi(tmp2);
		}
	}
	else
	{
		return (0);
	}
	return (r);
}
