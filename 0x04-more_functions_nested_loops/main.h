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
/**
 * print_line - prints line
 * @n: number of times  _ 
 * should be printed
 */
void print_line(int n);
/**
 * print_diagonal - prints 
 * diagonal line.
 * @n: number of \
 */
void print_diagonal(int n);
/**
 * print_square - prints square
 * @size: size of square. 
 */
void print_square(int size);
/**
 * print_triangle - prints triangle
 * @size: size of triangle.
 */
void print_triangle(int size);
/**
 * print_number - prints number using putchar
 * @n: number to be printed
 * return: none
 */
void print_number(int n);
#endif
