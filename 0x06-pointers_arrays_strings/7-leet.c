#include "main.h"
/**
 * leet - encodes a string into 1337
 * @: pointer to char
 *
 * Return: resulting string
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[6] = {'a', 'e', 'o', 't', 'l'};
	char nums[6] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
			{
				s[i] = nums[j];
			}
		}
	}

	return (s);
}
