#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
/**
 * _putchar - writes the character c
 * to stdout
 * @c: parameter to compare
 *
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - prints the alphabet
 *
 * return: void
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * return: void
 */
void print_alphabet_x10(void);
/**
 * _islower - checks if character is lowercase
 * @c: character to be checked
 *
 * return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - checks if character is alphabet
 * @c: character to be chacked
 *
 * return: 1 if alpha, 0 otherwise
 */
int _isalpha(int c);
/**
 * print_sign - prints sign based on input
 * @n: number to check 
 *
 * Return: 1, 0, or -1 
 */
int print_sign(int n);
/**
 * _abs - computes the absolute value of an integer.
 * @: int to compute
 *
 * Return: absolute value of int
 */
int _abs(int);
/**
 * print_last_digit - print last digit of an int
 * @: int
 *
 * Return: last digit of int
 */
int print_last_digit(int);
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void);
/**
 * add - returns the sum of two integers
 * @: int
 * @: int
 *
 * Return: int
 */
int add(int, int);
/**
 * print_to_98 - prints all natural numbers from n to 98 
 * @n: starting point
 *
 * Return: void
 */
void print_to_98(int n);
#endif
