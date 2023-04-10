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
	int coins;
	int arg;

	coins = 0;
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
				else
				{
					arg--;
				}
				coins++;
			}
		}
		else
		{
			printf("0\n");
			return (1);
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
