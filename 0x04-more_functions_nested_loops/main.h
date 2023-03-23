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
 * _isupper - checks if character is 
 * uppercase or not
 * @c: character to check
 * Return: 1 or 0
 */
int _isupper(int c);
/**
 * _idigit - checks if character is
 * a digit (0-9) or not.
 * @c: character to check
 * Return: 1 or 0
 */
int _isdigit(int c);
/**
 * mul - multiplies two integers
 * @a: int to multiply.
 * @b: int to multiply.
 * Return: result of a*b
 */
int mul(int a, int b);
/**
 * print_numbers - prints numbers
 * 0 through 9.
 */
void print_numbers(void);
/**
 * print_most_numbers - prints numbers
 * 0 through 9 except 2 and 4
 */
void print_most_numbers(void);
/**
 * more_numbers - prints numbers
 * 0 through 14 ten times
 */
void more_numbers(void);
#endif
