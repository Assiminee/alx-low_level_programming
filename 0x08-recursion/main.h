#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
/**
 * _putchar - writes the character c
 * to stdout
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s);
/** 
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s);
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to char
 *
 * Return: length of s
 */
int _strlen_recursion(char *s);
/**
 * factorial - returns the factorial of a given number
 * @n: int
 *
 * Return: factorial of n
 */
int factorial(int n);
/**
 * _pow_recursion - calculates x raised to the power of y
 * @x: base number
 * @y: the power raised
 *
 * Return: result of x to the power of y
 */
int _pow_recursion(int x, int y);
/**
 * _sqrt_recursion - returns natural square root of number
 * @n: int
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n);
/**
 * is_prime_number - checks if an integer is a prime number
 * @n: int to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n);
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome(char *s);
/**
 * wildcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2);
#endif
