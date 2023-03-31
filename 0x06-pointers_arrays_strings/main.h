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
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src);
/**
 * _strncat - concatenates two strings up to n char
 * @dest: destination string
 * @src: src string
 * @n: number of char to be appended
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n);
/**
 * _strncpy - copies n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of char to be copied
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to compare s1 to
 *
 * Return: 0 if s1 == s2, negative value if s1 < s2, positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2);
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n);
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @: pointer to char
 *
 * Return: converted string
 */
char *string_toupper(char *);
/**
 * cap_string - capitalizes all words of a string
 * @: pointer to char
 *
 * Return: converted string
 */
char *cap_string(char *);
/**
 * print_number - prints an integer
 * @n: int to be printed
 *
 * Return: void
 */
void print_number(int n);
/**
 * leet - encodes a string into 1337
 * @: pointer to char
 *
 * Return: resulting string
 */
char *leet(char *);
/**
 * rot13 - encodes a string using rot13
 * @s: pointer to char
 *
 * Return: encoded string
 */
char *rot13(char *);
/**
 * infinite_add - adds every digit from n1 and n2 and stores the result in a buffer
 * @n1: string containing numbers to be added
 * @n2: string containing numbers to be added
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
#endif
