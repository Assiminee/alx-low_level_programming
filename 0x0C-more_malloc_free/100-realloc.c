#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/**
  * _realloc - ...
  * @ptr: ...
  * @old_size: ...
  * @new_size: ...
  *
  * Return: ...
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && !new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);
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
