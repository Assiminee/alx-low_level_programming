#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	printf("size of char: %lu bytes\n", sizeof(char));
	printf("size of int: %lu bytes\n", sizeof(int));
	printf("size of long int: %lu bytes\n", sizeof(long int));
	printf("size of long long: %lu bytes\n", sizeof(long long));
	printf("size of float: %lu bytes\n", sizeof(float));
	return (0);
}
