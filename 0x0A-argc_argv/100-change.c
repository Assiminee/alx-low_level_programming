#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints min number of coins to make change for an amount of money
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: Always 0
 */
int main(int argc, char** argv)
{
	int cents;
	int arg;

	cents = 0;
	if (argc == 2)
	{
		arg = atoi(argv[argc - 1]);
		if (arg >= 0)
		{
			while (arg)
			{
				if (arg % 25 == 0)
				{
					arg -= 25;
				}
				else if (arg % 10 == 0)
				{
					arg -= 10;
				}
				else if (arg % 5 == 0)
				{
					arg -= 5;
				}
				else if (arg % 2 == 0)
				{
					arg -= 2;
				}
				else if (arg % 1 == 0)
				{
					arg -= 1;
				}
				cents++;
			}
		}
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	printf("%d", cents);
	printf("\n");
	return (0);
}
