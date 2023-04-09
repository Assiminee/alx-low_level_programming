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
 * _abs - computes the absolute value of an integer.
 * @: int to compute
 *
 * Return: absolute value of int
 */
int _abs(int);
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
 * _strcpy - copies src to dest including null terminating char
 * @dest: pointer to char. destination string.
 * @src: pointer to char. src string.
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);
/**
 * _atoi - converts a string to an integer.
 * @s: pointer to char
 *
 * Return: int
 */
int _atoi(char *s);
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
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill the memory area
 * @n: the first n bytes of memory to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to to which n bytes of src will be copied
 * @src: memory area from which n bytes will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strchr - locates a character in a string
 * @s: string to locate a character in
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c);
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string that contains the set of characters to search for
 *
 * Return: length of initial segment of s that contains only characters from accept
 */
unsigned int _strspn(char *s, char *accept);
/**
 * _strpbrk - locates the first occurrence in s of any of the bytes in accept
 * @s: string to be searched
 * @c: string of characters to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);
/**
 * _strstr - finds the first occurrence of substring needle in string haystack
 * @haystack: string to be searched
 * @needle: string to be searched for
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle);
#endif
