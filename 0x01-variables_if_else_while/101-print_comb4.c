#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
       	int j;
	int k;
	int x = 10;
	int y = 44;
	int z = 32;
	
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j && i < j)
			{
				for (k = 48; k <= 57; k++)
				{
					if (j != k && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i == 55 && j == 56 && k == 57)
						{
							continue;
						}
						else
						{
							putchar(y);
							putchar(z);
						}
					}
				}
			}
		}
	}
            	 
	putchar(x);

	return (0);
}
