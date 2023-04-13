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
 * malloc_checked - allocates memory using malloc.
 * @b: size in memory to be allocated
 *
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
/*
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatenated
 * @s2: string to be concatenated with s1 up to n bytes
 * @n: first n bytes of s2 
 *
 * Return: newly allocated space in memory containing s1
 * followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif
