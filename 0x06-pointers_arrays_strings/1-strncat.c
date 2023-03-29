#include "main.h"
/**
 * _strncat - concatenates two strings up to n char
 * @dest: destination string
 * @src: src string
 * @n: number of char to be appended
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
        int i;
        char *ptr = dest;

        while (*ptr)
        {
                ptr++;
        }

        for (i = 0; i < n && src[i]; i++)
        {
                *ptr = src[i];
                ptr++;
        }

        *ptr = '\0';
        return (dest);
}
