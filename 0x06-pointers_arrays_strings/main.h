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
#endif
