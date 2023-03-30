#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to char
 *
 * Return: converted string
 */
char *cap_string(char *s)
{
	int i;
	int c;
	int j;
	char sep[15] = {'\0', '\t', '\n', ' ', '!', '"', '(', ')',
		',', '.', ';', '?', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i - 1];
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; j < 14; j++)
			{
				if (c == sep[j])
				{
					s[i] -= 32;
					break;
				}
			}
		}
	}

	return (s);
}
