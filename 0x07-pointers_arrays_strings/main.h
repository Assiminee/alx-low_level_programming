#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
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
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to char
 *
 * Return: void
 */
void print_chessboard(char (*a)[8]);
/**
 * _putchar - writes the character c
 * to stdout
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer to char
 * @to: pointer to char
 *
 * Return: void
 */
void set_string(char **s, char *to);
/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of ints
 * @a: pointer t int
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size);
#endif
