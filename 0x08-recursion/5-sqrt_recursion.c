#include "main.h"
/**
 * _sqrt - finds the natural square of an int
 * @n: int
 * @guess: guess square root of n
 *
 * Return: int
 */
int _sqrt(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - returns natural square root of number
 * @n: int
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
