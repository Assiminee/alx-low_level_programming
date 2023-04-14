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
/*
 * _calloc - allocates memory for an array and sets it to 0
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size);
/*
 * array_range - creates an array of integers
 * @min: first value in array
 * @man: last value in array
 *
 * Return: pointer to int
 */
int *array_range(int min, int max);
/*
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call 
 * 	 to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * return: pointer to the newly allocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
