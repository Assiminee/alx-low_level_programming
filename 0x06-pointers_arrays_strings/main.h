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
#endif
