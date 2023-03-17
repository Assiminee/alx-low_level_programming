#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	printf("size of char: %d bytes\n", sizeof(char));
	printf("size of int: %d bytes\n", sizeof(int));
	printf("size of long int: %d bytes\n", sizeof(long int));
	printf("size of long long: %d bytes\n", sizeof(long long));
	printf("size of float: %d bytes\n", sizeof(float));
	return (0);
}
