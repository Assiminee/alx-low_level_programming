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
 * reset_to_98 - update the value *n is pointing to
 * @n: pointer to integer
 *
 * retun: void
 */
void reset_to_98(int *n);
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer
 * @b: pointer to integer
 *
 * return: void
 */
void swap_int(int *a, int *b);
/**
 * _strlen - return length of string
 * @s: pointer to char
 *
 * Return: length number of string
 */
int _strlen(char *s);
/**
 * _puts - prints string followed by a new line to stdout
 * @str: pointer to char
 *
 * Return: void
 */
void _puts(char *str);
/**
 * print_rev - prints string in reverse
 * @s: pointer to char
 *
 * Return: void
 */
void print_rev(char *s);
/**
 * puts2 - prints every other char in string starting with the first one
 * @str: pointer to char
 *
 * Return: void
 */
void puts2(char *str);
/**
 * puts_half - prints the second half of a string
 * @str: pointer to char
 *
 * Return: void
 */
void puts_half(char *str);
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to int
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n);
/**
 * _strcpy - copies src to dest including null terminating char
 * @dest: pointer to char. destination string.
 * @src: pointer to char. src string.
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);
#endif
