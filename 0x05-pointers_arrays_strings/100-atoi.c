#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: pointer to char
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int num;
	int sign;
	int i;

	num = 0;
	sign = 1;
	i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			num *= 10;
			num += (s[i] - '0');
		}
		else
		{
			if (num)
			{
				break;
			}
		}
		i++;
	}
	num *= sign;
	return (num);
}
