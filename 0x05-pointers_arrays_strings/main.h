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
 * return: int
 */
int _strlen(char *s);
#endif
