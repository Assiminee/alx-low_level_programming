#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: Always 0
 */
int main(int argc, char** argv)
{
	int input;
	int coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);
	if (input < 0)
	{
		printf("0\n");
		return (0);
	}

	while (input)
	{
		if (input % 25 == 0)
		{
			input -= 25;
		}
		else if (input % 10 == 0)
		{
			input -= 10;
		}
		else if (input % 5 == 0)
		{
			input -= 5;
		}
		else if (input % 2 == 0)
		{
			input -= 2;
		}
		else
		{
			input--;
		}
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
