#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/*
 * _realloc - reallocates a memory block using malloc and free
 * 
 * @ptr: pointer to the memory previously allocated with a call
 *       to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * return: pointer to the newly allocated block of memory
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr != NULL && !new_size)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	if (new_size > old_size)
	{
		_memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to to which n bytes of src will be copied
 * @src: memory area from which n bytes will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
