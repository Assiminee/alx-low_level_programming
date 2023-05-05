#include "main.h"
/**
 */
unsigned int binary_to_uint(const char *b)
{
	const char *ptr = b;
	size_t length = 0;
	unsigned int num = 0;
	int power;
	unsigned int num2;

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
