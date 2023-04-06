#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number - checks if an integer is a prime number
 * @n: int to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
/**
 * is_prime - checks if integer is prime
 * @n: number to check
 * @i: iteration times
 *
 * Return: int
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if (n / i < i)
		return (1);
	return (is_prime(n, i + 1));
}
