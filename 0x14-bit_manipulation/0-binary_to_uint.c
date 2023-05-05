#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string contaning the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	const char *ptr = b;
	int power, length = 0;
	unsigned int num2, num = 0;

	if (b == NULL)
		return (0);
	while (*ptr)
	{
		if (*ptr != '0' && *ptr != '1')
			return (0);
		length++;
		ptr++;
	}
	ptr = b;
	while (*ptr)
	{
		if (*ptr == '1')
		{
			num2 = 1;
			power = length - 1;
			if (power == 0)
			{
				num += 1;
			}
			while (power)
			{
				num2 *= 2;
				power--;
				if (power == 0)
				{
					num += num2;
					break;
				}
			}
		}
		length--;
		ptr++;
	}
	return (num);
}
