#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string contaning the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	size_t ptrLen = len(b);
	size_t i;
	unsigned int res = 0;

	if (ptrLen == 0)
		return (0);

	if (b == NULL)
		return (0);

	for (i = 0; i < ptrLen; i++)
	{
		if (b[i] == '1')
		{
			res += 1 << (ptrLen - 1 - i);
		}
	}

	return (res);
}

/**
 * len - calculates the length of a pointer to char
 * @b: pointer to char
 *
 * Return: the length of the char pointer
 */
size_t len(const char *b)
{
	size_t i = 0;
	const char *ptr = b;

	if (b == NULL)
		return (0);

	while (*ptr != '\0')
	{
		if (*ptr != '0' && *ptr != '1')
			return (0);
		i++;
		ptr++;
	}

	return (i);
}
