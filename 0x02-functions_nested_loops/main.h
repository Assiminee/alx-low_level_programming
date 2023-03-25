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
 * print sign - prints sign based on input
 * @n: number to check 
 *
 * Return: 1, 0, or -1 
 */
int print_sign(int n);
#endif
